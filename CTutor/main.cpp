#include <iostream>
using namespace std;

void function(int numOne, int numTwo) {
    if (numOne > numTwo) {
        cout << numOne;
    }
    else if (numOne < numTwo) {
        cout << numTwo;
    }
    else {
        cout << "error";
    }
}

int main() {
    function(5, 7);
    return 0;
}