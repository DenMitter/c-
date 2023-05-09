#include <iostream>
#include <fstream>
#include <string>

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
    while (input_file >> word) {
        if (word.length() >= 7) {
            output_file << word << " ";
        }
    }

    input_file.close();
    output_file.close();

    return 0;
}
