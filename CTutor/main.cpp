#include <iostream>
using namespace std;

void multiplication(int num, int multiplier) {
    cout << num << " x " << multiplier << " = " << num * multiplier << endl;
}

void printMultiplicationTable(int num, void (*multiplyFunc)(int, int)) {
    for (int i = 1; i <= 10; i++) {
        multiplyFunc(num, i);
    }
}

int main() {
    int num;
    cin >> num;

    printMultiplicationTable(num, multiplication);
    return 0;
}
