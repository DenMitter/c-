#include <iostream>
using namespace std;

bool binarySearch(double arr[], int size, double x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return true;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    double arr[] = { 1.2, 3.4, 5.6, 7.8, 9.0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    double x = 5.6;
    bool found = binarySearch(arr, size, x);

    if (found) {
        cout << "is found -> " << x << endl;
    }
    else {
        cout << "is not found -> " << x << endl;
    }

    return 0;
}
