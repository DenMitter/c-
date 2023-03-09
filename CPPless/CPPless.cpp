#include <iostream>
using namespace std;

int main() {
    const int numSides = 5;
    double sides[numSides];
    double perimeter = 0;

    cout << "length side pentagon -> " << endl;

    for (int i = 0; i < numSides; i++) {
        cout << "side " << i + 1 << ": ";
        cin >> sides[i];
        perimeter += sides[i];
    }

    cout << "result -> " << perimeter << endl;
    return 0;
}
