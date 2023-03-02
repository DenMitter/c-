#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n, avg;
    int sum = 0, i = 1, count = 0;

    for (i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    avg = sum / count;
    cout << "Середнє арифметичне всіх цілих чисел від 1 до 1000 є:" << avg << endl;
    return 0;
}