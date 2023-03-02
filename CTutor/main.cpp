#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cin >> number;

    int firstSum = 0, secondSum = 0;
    for (int i = 0; i < 3; i++) {
        firstSum += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++) {
        secondSum += number % 10;
        number /= 10;
    }

    if (firstSum == secondSum) {
        cout << "number is happy" << endl;
    }
    else {
        cout << "number not happy" << endl;
    }

    if (number > 999999 || number < 100000)
        cout << "6 digits!";

    return 0;
}