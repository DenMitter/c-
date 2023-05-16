#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
struct Employees
{ 
	string name;
	string surname; 
	int age;

	Employees() { 
		name = "NULL";
		surname = "NULL";
		age = 0;
	} 
	Employees(string name, string surname, int age) {
		this->name = name; 
		this->surname = surname;
		this->age = age;
	} 
	~Employees() { 
		name.clear(); 
		surname.clear();
	} 

	void about() { 
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "Name: " << name << endl; 
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}
}; 

struct file_process{ 
	bool save_Employees_to_file(Employees* obj, int size) { 
		ofstream file; 
		file.open("Employees.bin", ios::binary); 
		if (file.is_open()) { 
			file.write((char*)&size, sizeof(size)); 
			for (size_t i = 0; i < size; i++) { 
				file.write((char*)&obj[i], sizeof(obj[i])); 
			} 
			file.close(); 
			return true; 
		} 
		else { 
			return false; 
		} 
	} 
	bool load_Employees_from_file(Employees*& obj, int &size) { 
		ifstream file; file.open("Employees.bin", ios::binary); 
		if (file.is_open()) { 
			file.read((char*)&size, sizeof(size)); 
			for (size_t i = 0; i < size; i++) { 
				file.read((char*)&obj[i], sizeof(obj[i])); 
			}
			file.close(); 
			return true; 
		} 
		else { 
			return false; 
		} 
	} 
	bool save_Employees_to_file(Employees* obj) { 
		ofstream file; 
		file.open("Employees.bin", ios::binary); 
		if (file.is_open()) { 
			file.write((char*)obj, sizeof(obj)); 
			file.close(); return true; 
		} 
		else { 
			return false; 
		} 
	} 
	bool load_Employees_from_file(Employees*& obj) { 
		ifstream file; file.open("Employees.bin", ios::binary); 
		if (file.is_open()) { 
			file.read((char*)obj, sizeof(obj)); 
			file.close(); 
			return true; 
		} 
		else { 
			return false; 
		} 
	} 
}; 

void addEmployeess(int size_of_Employeess, Employees* obj)
{
	for (int i = 0; i < size_of_Employeess; i++)
	{
		string name, surname;
		int age;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter surname: ";
		cin >> surname;
		cout << "Enter age: ";
		cin >> age;
		obj[i] = Employees(name, surname, age);
	}
}
void removeEmployees(int size_of_Employeess, Employees* obj)
{
	string surname;
	cout << "Enter the surname of the employee to remove: ";
	cin >> surname;
	bool employeeRemoved = false;
	for (int i = 0; i < size_of_Employeess; i++)
	{
		if (obj[i].surname == surname)
		{
			obj[i] = Employees();
			employeeRemoved = true;
		}
	}
}
void showAllEmployees(int size_of_Employeess, Employees* obj)
{
	for (int i = 0; i < size_of_Employeess; i++)
	{
		if (obj[i].name != "NULL")
		{
			obj[i].about();
		}
	}
}
void searchEmployeesBySurname(int size_of_Employeess, Employees* obj)
{
	string surname;
	cout << "Enter the surname to search for: ";
	cin >> surname;
	bool employeeFound = false;
	for (int i = 0; i < size_of_Employeess; i++)
	{
		if (obj[i].surname == surname)
		{
			obj[i].about();
			employeeFound = true;
		}
	}

	if (!employeeFound)
	{
		cout << "Employee not found.\n";
	}
}
void searchEmployeesByAge(int size_of_Employeess, Employees* obj)
{
	int age;
	cout << "Enter the age to search for: ";
	cin >> age;
	bool employeeFound = false;
	for (int i = 0; i < size_of_Employeess; i++)
	{
		if (obj[i].age == age)
		{
			obj[i].about();
			employeeFound = true;
		}
	}

	if (!employeeFound)
	{
		cout << "Employee not found.\n";
	}
}


int main() { 
	int size_of_Employeess = 5; 
	int menu;
	Employees* obj1 = new Employees[size_of_Employeess]; 

	file_process* fp = new file_process();
	int switch_on = 2;

	while (true) {
		cout << "~~~~~~~~~~~~~~~~~ Menu ~~~~~~~~~~~~~~~~\n";
		cout << "    1.    Add employeess               \n";
		cout << "    2.    Remove employeess            \n";
		cout << "    3.    Show all employeess          \n";
		cout << "    4.    Search employees by surname  \n";
		cout << "    5.    Search employees by age      \n";
		cout << "    6.    Save employees to file		\n";
		cout << "    7.    Load employees from file		\n";
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cin >> menu;


		switch (menu) {
			case 1:
			{
				addEmployeess(size_of_Employeess, obj1);
				break;
			}
			case 2:
			{
				removeEmployees(size_of_Employeess, obj1);
				break;
			}
			case 3:
			{
				showAllEmployees(size_of_Employeess, obj1);
				break;
			}
			case 4:
			{
				searchEmployeesBySurname(size_of_Employeess, obj1);
				break;
			}
			case 5:
			{
				searchEmployeesByAge(size_of_Employeess, obj1);
				break;
			}
			case 6:
			{
				bool saved = fp->save_Employees_to_file(obj1, size_of_Employeess);
				if (saved)
				{
					cout << "Employees saved to file.\n";
				}
				else
				{
					cout << "Failed to save employees to file.\n";
				}
				break;
			}
			case 7:
			{
				bool loaded = fp->load_Employees_from_file(obj1, size_of_Employeess);
				if (loaded)
				{
					cout << "Employees loaded from file.\n";
				}
				else
				{
					cout << "Failed to load employees from file.\n";
				}
				break;
			}
		}
		switch (switch_on) {
			case 1: {
				(fp->save_Employees_to_file(obj1, size_of_Employeess)) ? cout << "Employees saved to file." << endl : cout << "Employees not saved to file." << endl;
			}
			break;
			case 2: {
				(fp->load_Employees_from_file(obj1, size_of_Employeess)) ? cout << "Employees loaded from file." << endl : cout << "Employees not loaded from file." << endl;
				/*for (size_t i = 0; i < size_of_Employeess; i++) {
					obj1[i].about();
				}*/
			}
			break;
		}
	}
	return 0;
}