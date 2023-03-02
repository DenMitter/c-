#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int numOne, numTwo, result;
    cout << "one -> ";
    cin >> numOne;
    cout << "two -> ";
    cin >> numTwo;

    if (numOne > numTwo) {
        result = numTwo;
    }
    else {
        result = numOne;
    }

    cout << endl << result;
    return 0;
}