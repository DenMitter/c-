#include <iostream>
using namespace std;

void function(int num) {
    num = num* num* num;
    cout << num;
}

int main() {
    function(5);
    return 0;
}