// Я надіюсь ви не забули аудіо файл закинути на робочий стіл. І нажаль по другому не виходить запустити аудіо, тільки через відкриття якогось mp3 програвача

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct Animal {
private:
    string name;
    string _class;
    string alias;

public:
    Animal(string name, string _class, string alias) {
        this->name = name;
        this->_class = _class;
        this->alias = alias;

        cout << endl << "Create animal (argument)" << endl;
    }
    ~Animal() {
        cout << endl << "Destroy animal";
    }

    void ser_name(string name) {
        this->name = name;
    }
    void ser__class(string _class) {
        this->name = _class;
    }
    void ser_alias(string alias) {
        this->name = alias;
    }

    void get_name() const {
        cout << endl << this->name;
    }
    void get__class() const {
        cout << endl << this->_class;
    }
    void get_alias() const {
        cout << endl << this->alias;
    }

    void vote() {
        HINSTANCE result;
        result = ShellExecute(NULL, NULL, L"C:/Users/Home/Desktop/57647-napadenie-na-belarus.mp3", NULL, NULL, SW_SHOWDEFAULT);// Home замінити на свого користувача
        if ((int)result <= 32) {
            cout << "Error\nReturn value: " << (int)result << endl;
        }
    }
};

int main() {
    int punkt = 0;
    Animal animal("bel", "undefined", "bulba");

    animal.get_name();
    animal.get__class();
    animal.get_alias();

    cout << "Vote in bulba - input \"1\"\t";
    cin >> punkt;

    if (punkt == 1) { animal.vote(); }
    else { cout << "Error"; }
    return 0;
}
