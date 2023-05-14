#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template<typename T>
struct file
{
private:
	fstream _file;
	string _path;

	void write_to_file(T* value, const int size, bool is_binary)
	{
		if (_file.is_open())
		{
			if (is_binary)
			{
				_file.write((char*)&size, sizeof(int));
				for (size_t i = 0; i < size; i++)
				{
					_file.write((char*)&value[i], sizeof(T));
				}

			}
			else
			{
				_file << size << endl;
				for (size_t i = 0; i < size; i++)
				{
					_file << value[i] << endl;
				}
			}
			_file.close();
		}
		else
		{
			perror("Error opening file");
		}
	}
	void write_to_file(T value, bool is_binary)
	{
		if (_file.is_open())
		{
			if (is_binary)
			{
				_file.write((char*)&value, sizeof(T));
			}
			else
			{
				_file << value << endl;
			}
			_file.close();
		}
		else
		{
			perror("Error opening file");
		}
	}
public:
	file(string path) : _path(path) {}
	~file() { _file.close(); }

	void chage_path(string path) { _path = path; }
	string get_path() { return _path; }

	//write system
	void save_to_file(T value, bool is_binary = false) {
		(is_binary) ? _file.open(_path, ios::out | ios::binary) : _file.open(_path, ios::out);
		write_to_file(value, is_binary);
	}
	void save_to_file(T* value, bool is_binary = false) {
		save_to_file((T)*value, is_binary);
	}
	void save_to_file(T* value, const int size, bool is_binary = false) {
		(is_binary) ? _file.open(_path, ios::out | ios::binary) : _file.open(_path, ios::out);
		write_to_file(value, size, is_binary);
	}
	//TODO!!!
	//1) append system
	void append_to_file(T value, bool is_binary = false) {
		(is_binary) ? _file.open(_path, ios::app | ios::binary) : _file.open(_path, ios::app);
		write_to_file(value, is_binary);
	}

	void append_to_file(T* value, bool is_binary = false) {
		append_to_file((T)*value, is_binary);
	}

	void append_to_file(T* value, const int size, bool is_binary = false) {
		(is_binary) ? _file.open(_path, ios::app | ios::binary) : _file.open(_path, ios::app);
		write_to_file(value, size, is_binary);
	}
	//2) load from file
	T load_from_file(bool is_binary = false)
	{
		T value;
		if (is_binary)
		{
			_file.open(_path, ios::in | ios::binary);
			if (_file.is_open())
			{
				_file.read((char*)&value, sizeof(T));
				_file.close();
			}
			else
			{
				perror("Error opening file");
			}
		}
		else
		{
			string line;
			_file.open(_path, ios::in);
			if (_file.is_open())
			{
				getline(_file, line);
				value = stoi(line);
				_file.close();
			}
			else
			{
				perror("Error opening file");
			}
		}
		return value;
	}
	T* load_from_file(int& size, bool is_binary = false)
	{
		T* values = nullptr;
		if (is_binary)
		{
			_file.open(_path, ios::in | ios::binary);
			if (_file.is_open())
			{
				_file.read((char*)&size, sizeof(int));
				values = new T[size];
				for (size_t i = 0; i < size; i++)
				{
					_file.read((char*)&values[i], sizeof(T));
				}
				_file.close();
			}
			else
			{
				perror("Error opening file");
			}
		}
		else
		{
			string line;
			_file.open(_path, ios::in);
			if (_file.is_open())
			{
				getline(_file, line);
				size = stoi(line);
				values = new T[size];
				for (size_t i = 0; i < size; i++)
				{
					getline(_file, line);
					values[i] = stoi(line);
				}
				_file.close();
			}
			else
			{
				perror("Error opening file");
			}
		}
		return values;
	}
};

int main()
{
	bool is_binary = true;
	int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};
	int* arr2 = new int[size] {3, 2, 3, 4, 5};
	file<int> f("test.bin");
	f.save_to_file(arr, is_binary);
	f.append_to_file(arr2, is_binary);

	int loaded_value = f.load_from_file(is_binary);
	cout << "loaded value -> " << loaded_value << endl;

	int loaded_size;
	int* loaded_array = f.load_from_file(loaded_size, is_binary);
	cout << "loaded array -> ";
	for (int i = 0; i < loaded_size; i++)
	{
		cout << loaded_array[i] << " ";
	}
	cout << endl;
	delete[] arr;
	delete[] arr2;
	delete[] loaded_array;
	return 0;
}