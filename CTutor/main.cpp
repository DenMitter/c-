#include <iostream>
using namespace std;

int main() {
    int hrn, kop;
    cout << "enter -> ";
    cin >> hrn >> kop;

    if (kop > 99) {
        hrn += kop / 100;
        kop %= 100;
    }

    cout << "corrected amount: " << hrn << " hrn " << kop << " kop\n";

    return 0;
}