#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    fstream input_file("input.txt", ios::in);
    fstream output_file("output.txt", ios::out);

    if (!input_file.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }

    if (!output_file.is_open()) {
        cout << "Error opening output file" << endl;
        return 1;
    }

    string word;
    char c;
    while (input_file.get(c)) {
        if (isalpha(c)) {
            word.push_back(c);
        }
        else if (!word.empty()) {
            if (word.length() >= 7) {
                output_file << word << " ";
            }
            word.clear();
        }
    }

    if (!word.empty() && word.length() >= 7) {
        output_file << word << " ";
    }

    input_file.close();
    output_file.close();

    return 0;
}
