#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int numOne, numTwo, result;
    cout << "num one -> ";
    cin >> numOne;
    cout << "num two -> ";
    cin >> numTwo;

    if (numOne < numTwo) {
        result = numOne;
    }
    else {
        result = numTwo;
    }

    if (numOne == numTwo) {
        cout << "Числа рівні";
    }
    else {
        cout << result;
    }
    return 0;
}