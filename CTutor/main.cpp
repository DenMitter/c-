#include <iostream>
using namespace std;

int main() {
    double scale, distance_cm, distance_km;

    cout << "enter map (sm) -> ";
    cin >> scale;

    cout << "distance between points (sm) -> ";
    cin >> distance_cm;

    distance_km = distance_cm / (100000.0 / scale);
    cout << "distance between settlements : " << distance_km << " km" << endl;

    return 0;
}