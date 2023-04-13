#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "string and st35ring";
    int digits = 0;
    int letters = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            digits++;
        }
        if (isalpha(str[i])) {
            letters++;
        }
    }

    cout << "leters -> " << letters << endl;
    cout << "digits -> " << digits;
    return 0;
}