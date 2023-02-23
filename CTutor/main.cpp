#include <iostream>
using namespace std;

int main() {
    double length, width, height, volume;

    cout << "enter -> :\n";
    cout << "length (sm) -> ";
    cin >> length;
    cout << "width (sm) -> ";
    cin >> width;
    cout << "height (sm) -> ";
    cin >> height;

    volume = length * width * height;
    cout << "result: " << volume << " cub. sm.\n";

    return 0;
}