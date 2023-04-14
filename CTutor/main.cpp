#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter your number -> ";
    cin >> num;
    int* ptr_num = &num;

    if (*ptr_num > 0) {
        cout << "number is positive" << endl;
    }
    else if (*ptr_num < 0) {
        cout << "number is negative" << endl;
    }
    else {
        cout << "number is zero" << endl;
    }

    return 0;
}