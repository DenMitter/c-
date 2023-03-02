#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num, sum = 0;
    cout << "num -> ";
    cin >> num;

    if (num >= 500) {
        cout << "Введіть число менше за 500";
    }

    while (num < 500) {
        sum += num;
        num++;
    }

    cout << "Сума чисел до "
        << "500" << " = " << sum << endl;
    return 0;
}