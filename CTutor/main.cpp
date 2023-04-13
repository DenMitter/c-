#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "level";
    int len = str.length();

    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}