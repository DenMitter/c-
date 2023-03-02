#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int option;
    cout << "Введіть номер варіанту: ";
    cin >> option;

    for (int i = 1; i <= 10; i++) {
        cout << option << " * " << i << " = " << option * i << endl;
    }
    return 0;
}