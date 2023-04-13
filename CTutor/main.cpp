#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "string and string";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(i, 1, "\t");
        }
    }

    cout << str << endl;
    return 0;
}