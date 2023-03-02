#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num;
    cout << "Введіть чотиризначне число: ";
    cin >> num;

    if (num < 1000 || num>9999) {
        cout << "число не чотиризначне";
        return 0;
    }

    int d1 = num / 1000 % 10,
        d2 = num / 100 % 10,
        d3 = num / 10 % 10,
        d4 = num % 10;

    int new_num = d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    cout << "число становить " << new_num << endl;

    return 0;
}