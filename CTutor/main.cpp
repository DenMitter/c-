#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num, sum = 1;
    cout << "num -> ";
    cin >> num;

    if (num >= 20) {
        cout << "Введіть число менше за 20";
    }

    while (num < 20) {
        sum = sum * num;
        num++;
    }

    cout << "Добуток чисел до "
        << "20" << " = " << sum << endl;
    return 0;
}