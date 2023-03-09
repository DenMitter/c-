#include <iostream>

using namespace std;

int main() {
    float profits[12];
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < 12; i++) {
        cout << "cash -> " << i + 1 << ": ";
        cin >> profits[i];

        if (profits[i] > profits[max_index]) {
            max_index = i;
        }
        else if (profits[i] < profits[min_index]) {
            min_index = i;
        }
    }

    cout << endl << "max -> " << max_index + 1 << endl;
    cout << "min ->" << min_index + 1 << endl;
    return 0;
}
