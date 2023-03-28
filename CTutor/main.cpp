#include <iostream>
using namespace std;

int function(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * function(n - 1);
    }
}


int main() {
    cout << function(5);
    return 0;
}
