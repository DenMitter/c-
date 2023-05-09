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

    string lines[1000];
    int num_lines = 0;
    string line;
    while (getline(input_file, line)) {
        lines[num_lines] = line;
        num_lines++;
    }

    for (int i = num_lines - 1; i >= 0; i--) {
        output_file << lines[i] << endl;
    }

    input_file.close();
    output_file.close();

    return 0;
}
