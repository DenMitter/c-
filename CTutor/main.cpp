#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "string and string";
    int word = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            word++;
        }
    }

    cout << "word -> " << word+1 << endl;
    return 0;
}