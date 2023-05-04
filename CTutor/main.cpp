#include <windows.h>
#include <iostream>

#pragma comment(lib, "winmm.lib")
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
        //PlaySound(L"57647-napadenie-na-belarus.wav", NULL, SND_FILENAME);
        PlaySound(L"dog.wav", NULL, SND_FILENAME);
    }
};

int main() {
    int punkt = 1;
    Animal animal("bel", "undefined", "bulba");

    animal.get_name();
    animal.get__class();
    animal.get_alias();
    
    while (punkt != 0) {
        cout << endl << "Vote - input \"1\"\t";
        cin >> punkt;

        if(punkt == 1) animal.vote();
    }
    return 0;
}
