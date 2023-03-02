#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n[7];
    int max = 0;

    cout << "введіть числа: \n";
    for (int i = 0; i < 7; i++) {
        cin >> n[i];
    }
    for (int j = 0; j < 7; j++) {
        if (n[j] > max)
            max = n[j];
    }

    cout << "максимальне число: " << max << endl;
    return 0;
}