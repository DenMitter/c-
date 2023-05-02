#include <iostream>
#include <string>
using namespace std;

struct WashingMachine {
    string brand;
    string color;
    float width;
    float length;
    float height;
    int power;
    int spin_speed;
    int temperature;

    WashingMachine(string brand, string color, float width, float length, float height, int power, int spin_speed, int temperature) {
        this->brand = brand;
        this->color = color;
        this->width = width;
        this->length = length;
        this->height = height;
        this->power = power;
        this->spin_speed = spin_speed;
        this->temperature = temperature;

        cout << endl << "Create washing (argument)" << endl;
    }
    ~WashingMachine() {
        cout << endl << "Destroy washing";
    }
};

int main() {
    WashingMachine washing_machine("Samsung", "White", 65.0, 65.0, 75.0, 1100, 3000, 41);

    cout << endl << "My washing machine:" << endl;
    cout << "Brand: " << washing_machine.brand << endl;
    cout << "Color: " << washing_machine.color << endl;
    cout << "Dimensions: " << washing_machine.width << "x" << washing_machine.length << "x" << washing_machine.height << " cm" << endl;
    cout << "Power: " << washing_machine.power << " W" << endl;
    cout << "Spin speed: " << washing_machine.spin_speed << " rpm" << endl;
    cout << "Temperature: " << washing_machine.temperature << " C" << endl;

    return 0;
}
