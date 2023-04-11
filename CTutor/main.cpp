#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void convertTemperature(double temperature, double (*convertFunc)(double)) {
    double result = convertFunc(temperature);
    cout << "result ->  " << result << endl;
}

int main() {
    double temperature;
    int choice;

    cout << "input -> ";
    cin >> temperature;

    cout << "1. Celcia to Farengeit\n";
    cout << "2. Farengeit to Celcia\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        convertTemperature(temperature, celsiusToFahrenheit);
        break;
    }
    case 2: {
        convertTemperature(temperature, fahrenheitToCelsius);
        break;
    }
    default: {
        cout << "Error\n";
        break;
    }
    }
    return 0;
}
