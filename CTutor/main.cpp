#include <iostream>
using namespace std;

const int SIZE = 5;

void addArrays(int arr1[], int arr2[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void subtractArrays(int arr1[], int arr2[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] - arr2[i];
    }
}

void multiplyArrays(int arr1[], int arr2[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

void operateOnArrays(int arr1[], int arr2[], int size, void (*operation)(int[], int[], int, int[])) {
    int result[SIZE];
    operation(arr1, arr2, size, result);
    cout << "result -> [";
    for (int i = 0; i < size - 1; i++) {
        cout << result[i] << ", ";
    }
    cout << result[size - 1] << "]" << endl;
}

int main() {
    int arr1[SIZE] = { 1, 2, 3, 4, 5 };
    int arr2[SIZE] = { 10, 9, 8, 7, 6 };
    int choice;

    cout << "1. add item in mass\n";
    cout << "2. remove item in mass\n";
    cout << "3. * item in mass\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            operateOnArrays(arr1, arr2, SIZE, addArrays);
            break;
        }
        case 2: {
            operateOnArrays(arr1, arr2, SIZE, subtractArrays);
            break;
        }
        case 3: {
            operateOnArrays(arr1, arr2, SIZE, multiplyArrays);
            break;
        }
        default: {
            cout << "Error\n";
            break;
        }
    }
    return 0;
}
