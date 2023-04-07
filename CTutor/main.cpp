#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high) {
    int mid;
    while (low < high) {
        mid = (low + high) / 2;

        if (arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_index = binarySearch(arr, 0, n - 1);
    cout << "res -> " << arr[max_index] << endl;
    return 0;
}
