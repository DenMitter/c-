#include <iostream>
#include <string>
using namespace std;

struct Boiler {
private:
    string brand;
    string color;
    int power;
    int amount;
    int temp;

public:
    Boiler(string brand, string color, int power, int amount, int temp) {
        this->brand = brand;
        this->color = color;
        this->power = power;
        this->amount = amount;
        this->temp = temp;

        cout << endl << "Create washing (argument)" << endl;
    }
    ~Boiler() {
        cout << endl << "Destroy washing";
    }

    void get_brand() const {
        cout << endl << this->brand;
    }
    void get_color() const {
        cout << endl << this->color;
    }
    void get_power() const {
        cout << endl << this->power;
    }
    void get_amount() const {
        cout << endl << this->amount;
    }
    void get_temp() const {
        cout << endl << this->temp;
    }
};

int main() {
    Boiler boiler("Samsung", "Purple", 35, 21, 41);

    boiler.get_brand();
    boiler.get_color();
    boiler.get_power();
    boiler.get_amount();
    boiler.get_temp();
    return 0;
}
