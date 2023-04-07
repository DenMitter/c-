#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        }
        else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = { 1, 3, 5, 7, 9 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 2, 4, 6, 8, 10 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* result = new int[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, result);

    cout << "res -> ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;
    return 0;
}
