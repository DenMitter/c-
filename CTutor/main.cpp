#include <iostream>
using namespace std;

int main() {
    double radius, volume;
    const double rad = 3.14159;

    cout << "radius -> ";
    cin >> radius;

    volume = (4.0 / 3.0) * rad * radius * radius * radius;
    cout << "volume a sphere radius" << radius << " equal " << volume << endl;

    return 0;
}