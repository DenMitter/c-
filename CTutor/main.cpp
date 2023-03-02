#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num;
    cout << "num -> ";
    cin >> num;

    if (num > 0) {
        cout << "Число додатне";
    }
    else if (num < 0) {
        cout << "Число від`ємне";
    }
    else if (num == 0) {
        cout << "Число дорівеює нулю";
    }
    return 0;
}