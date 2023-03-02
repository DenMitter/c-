#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num, sum = 0;
    do {
        cin >> num;
        sum += num;
        cout << sum << endl << endl;
    } while (num != 0);
    cout << "Результат\t—\t" + sum;
    return 0;
}