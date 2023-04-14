#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers -> ";
    cin >> a >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    if (*ptr_a > *ptr_b) {
        cout << "largest number is -> " << *ptr_a << endl;
    }
    else {
        cout << "largest number is -> " << *ptr_b << endl;
    }

    return 0;
}