#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int num;
    cin >> num;

    if (num % 2 == 0) {
        cout << "Число " << num << " парне";
    }
    return 0;
}