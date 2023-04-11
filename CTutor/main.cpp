#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n % 2 == 0);
}

bool isOdd(int n) {
    return (n % 2 != 0);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void filterArray(int arr[], int size, bool (*criteria)(int)) {
    for (int i = 0; i < size; ++i) {
        if ((*criteria)(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = { 2, 3, 5, 6, 8, 9, -10, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "even numbers -> ";
    filterArray(arr, size, &isEven);

    cout << "odd numbers -> ";
    filterArray(arr, size, &isOdd);

    cout << "prime numbers -> ";
    filterArray(arr, size, &isPrime);

    return 0;
}