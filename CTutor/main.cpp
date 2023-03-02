#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int numOne, numTwo;
    cout << "num one -> ";
    cin >> numOne;
    cout << "num two -> ";
    cin >> numTwo;

    cout << "result -> " << pow(numOne, numTwo);
    return 0;
}