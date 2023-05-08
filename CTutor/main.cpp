#include <iostream>
#include <string>
using namespace std;

int MAX_STUDENTS = 2;
const int MAX_PROGRESS = 5;

struct Progress {
    int progress[MAX_PROGRESS];
};

struct FullName {
    string name;
    string surname;
};

struct Student {
    FullName name;
    FullName surname;
    string group;
    Progress progress;
};

Student addStudent(FullName name, FullName surname, string group, Progress progress) {
    Student student;
    student.name = name;
    student.surname = surname;
    student.group = group;
    for (int i = 0; i < MAX_PROGRESS; i++) {
        student.progress.progress[i] = progress.progress[i];
    }
    return student;
}

int main() {
    Student* students = new Student[MAX_STUDENTS];
    int menu;

    while (true) {
        cout << "~~~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~~~" << endl;
        cout << "~                                  ~" << endl;
        cout << "~   1.    Add student              ~" << endl;
        cout << "~   2.    Show hide student        ~" << endl;
        cout << "~   3.    Show low student         ~" << endl;
        cout << "~                                  ~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cin >> menu;

        switch (menu) {
            case 1: {
                for (int i = 0; i < MAX_STUDENTS; i++) {
                    FullName name, surname;
                    string group;
                    Progress progress;

                    cout << endl << "~~~~~~~~~~~~~~~ Student #" << i + 1 << "~~~~~~~~~~~~~~~" << endl;
                    cout << "Student name: ";
                    cin >> name.name;
                    cout << "Student surname: ";
                    cin >> surname.surname;
                    cout << "Student group: ";
                    cin >> group;
                    cout << endl;
                    for (int progr = 0; progr < MAX_PROGRESS; progr++) {
                        cout << "Student progress #" << progr + 1 << ": ";
                        cin >> progress.progress[progr];
                    }
                    students[i] = addStudent(name, surname, group, progress);
                }

                cout << endl << "~~~~~~~~~~~~~~~~~ Result ~~~~~~~~~~~~~~~~" << endl;
                for (int i = 0; i < MAX_STUDENTS; i++) {
                    cout << "Student #" << i + 1 << endl;
                    cout << "Name: " << students[i].name.name << endl;
                    cout << "Surname: " << students[i].surname.surname << endl;
                    cout << "Group: " << students[i].group << endl;
                    cout << "Progress: ";
                    for (int j = 0; j < 5; j++) {
                        cout << students[i].progress.progress[j] << " ";
                    }
                    cout << endl << endl;
                }
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                break;
            }
            case 2: {
                for (int i = 0; i < MAX_STUDENTS; i++) {
                    int numExcellentGrades = 0;
                    for (int j = 0; j < MAX_PROGRESS; j++) {
                        if (students[i].progress.progress[j] >= 6) {
                            numExcellentGrades++;
                        }
                    }
                    if ((float)numExcellentGrades / MAX_PROGRESS > 0.75) {
                        cout << students[i].name.name << " " << students[i].surname.surname << endl;
                    }
                    else { cout << "Empty" << endl; }
                }
            }
            case 3: {
                for (int i = 0; i < MAX_STUDENTS; i++) {
                    int numExcellentGrades = 0;
                    for (int j = 0; j < MAX_PROGRESS; j++) {
                        if (students[i].progress.progress[j] == 2 || 3) {
                            numExcellentGrades++;
                        }
                    }
                    if ((float)numExcellentGrades / MAX_PROGRESS > 0.50) {
                        cout << students[i].name.name << " " << students[i].surname.surname << endl;
                    }
                    else { cout << "Empty" << endl; }
                }
            }
        }
    }

    return 0;
}
