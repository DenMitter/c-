#include <iostream>
#include <string>
using namespace std;

struct Iron {
private:
    string brand;
    string model;
    string color;
    float min_temp;
    float max_temp;
    bool steam;
    float power;

public:
    Iron(string brand, string model, string color, float min_temp, float max_temp, bool steam, float power) {
        this->brand = brand;
        this->model = model;
        this->color = color;
        this->min_temp = min_temp;
        this->max_temp = max_temp;
        this->steam = steam;
        this->power = power;

        cout << endl << "Create washing (argument)" << endl;
    }
    ~Iron() {
        cout << endl << "Destroy washing";
    }

    void get_brand() const {
        cout << endl << this->brand;
    }
    void get_model() const {
        cout << endl << this->model;
    }
    void get_color() const {
        cout << endl << this->color;
    }
    void get_min_temp() const {
        cout << endl << this->min_temp;
    }
    void get_max_temp() const {
        cout << endl << this->max_temp;
    }
    void get_steam() const {
        cout << endl << this->steam;
    }
    void get_power() const {
        cout << endl << this->power;
    }
};

int main() {
    Iron iron("Samsung", "Super-puper", "Purple", 5, 35, true, 35);

    iron.get_brand();
    iron.get_model();
    iron.get_color();
    iron.get_min_temp();
    iron.get_max_temp();
    iron.get_steam();
    iron.get_power();
    return 0;
}
