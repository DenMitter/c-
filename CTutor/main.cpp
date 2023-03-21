#include <iostream>

using namespace std;

void count(int arr[], int size) {
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;
}


int main() {
    int arr[] = { -1, 0, 2, 4, -3, 0 };
    int size = 6;
    count(arr, size);

    return 0;
}
