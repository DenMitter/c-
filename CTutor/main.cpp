#include <iostream>
using namespace std;

void function(int num) {
    if (num > 0) {
        cout << true;
    }
    else if (num < 0) {
        cout << false;
    }
    else {
        cout << "error";
    }
}

int main() {
    function(5);
    return 0;
}