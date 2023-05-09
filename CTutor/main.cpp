#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    if (!input_file.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }

    if (!output_file.is_open()) {
        cout << "Error opening output file" << endl;
        return 1;
    }

    string line;
    string last_line_without_spaces;
    bool found_line_without_spaces = false;
    while (getline(input_file, line)) {
        output_file << line << endl;
        if (line.find(' ') == string::npos) { // Якщо рядок не містить пробіли
            last_line_without_spaces = line;
            found_line_without_spaces = true;
        }
    }

    if (found_line_without_spaces) {
        output_file << "------------" << endl;
    }
    else {
        output_file << endl << "------------" << endl;
    }

    input_file.close();
    output_file.close();

    return 0;
}
