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

int sumDigits(int n) {
    if (n < 10) {
        return n;
    }
    else {
        return n % 10 + sumDigits(n / 10);
    }
}


int main() {
    cout << sumDigits(12);
}