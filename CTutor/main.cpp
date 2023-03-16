#include <iostream>
using namespace std;

void function(int num) {
    int number = 1;
    for (int i = 1; i <= num; i++) {
        number = number*i;
    }

    cout << number;
}

int main() {
    function(5);
    return 0;
}