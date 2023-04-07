#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    const int n1 = m - l + 1;
    const int n2 = r - m;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main() {
    int arr1[] = { 1, 3, 5, 7 };
    int arr2[] = { 2, 4, 6, 8 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int* arr3 = new int[n1 + n2];

    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (int j = 0; j < n2; j++) {
        arr3[n1 + j] = arr2[j];
    }

    mergeSort(arr3, 0, n1 + n2 - 1);

    for (int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
