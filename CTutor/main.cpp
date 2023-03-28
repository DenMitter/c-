#include <iostream>
using namespace std;

int function(int a, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        return a * function(a, n - 1);
    }
    else {
        return 1 / a * function(a, n + 1);
    }
}

int main() {
    cout << function(5, 3);
    return 0;
}
