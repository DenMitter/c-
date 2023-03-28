#include <iostream>
using namespace std;

int function(int n) {
    if (n < 2) {
        return n;
    }
    else {
        return function(n - 1) + function(n - 2);
    }
}

int main() {
    cout << function(5);
    return 0;
}
