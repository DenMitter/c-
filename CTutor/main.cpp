#include <iostream>
using namespace std;

int function(int a, int b) {
    if (a == 0) {
        return b;
    }
    return function(b % a, a);
}

int main() {
    cout << function(5, 10);
    return 0;
}
