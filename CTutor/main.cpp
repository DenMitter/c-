#include <iostream>
using namespace std;

int main() {
    int arr[] = { 2, 0, 5, 7, 0, 6, 0, 8 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < length; i++) {
        arr[i] = -1;
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}