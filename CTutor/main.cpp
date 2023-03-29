#include <iostream>
#include <cmath>
using namespace std;

int len(int a) {
    if (a == 0) {
        return 0;
    }
    else {
        return 1 + len(a / 10);
    }
}

int palindrom(int a, int k = 0, int c = 0, int b = 0) {
    if (a == 0) {
        return true;
    }

    k = len(a);
    c = a / pow(10, k - 1);
    b = a % 10;

    if (c == b) {
        return palindrom(a % int(pow(10, k - 1)) / 10);
    }
    else {
        return false;
    }
}

int main() {
    int x = 95;

    len(x);
    if (palindrom(x)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}