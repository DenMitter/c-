#include <iostream>

using namespace std;

void average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Average: " << (double)sum / size << endl;
}


int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    average(arr, size);

    return 0;
}
