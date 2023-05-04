#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1 = { 1.0, 2.0 };
    Point p2 = { 3.0, 4.0 };

    double d = distance(p1, p2);
    cout << "Distance between (" << p1.x << ", " << p1.y << ") and (" << p2.x << ", " << p2.y << "): " << d << endl;

    return 0;
}
