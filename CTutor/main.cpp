#include <iostream>
using namespace std;

int main() {
    int one, two;
    char op;
    int result;

    cout << "enter an expression -> ";
    cin >> one >> op >> two;

    int* ptr_a = &one;
    int* ptr_b = &two;

    switch (op) {
    case '+':
        result = *ptr_a + *ptr_b;
        break;
    case '-':
        result = *ptr_a - *ptr_b;
        break;
    case '*':
        result = *ptr_a * *ptr_b;
        break;
    case '/':
        result = *ptr_a / *ptr_b;
        break;
    default:
        cout << "invalid operator" << endl;
        return 1;
    }

    cout << "result -> " << result << endl;
    return 0;
}
