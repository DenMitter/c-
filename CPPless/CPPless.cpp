#include <iostream>
using namespace std;

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length / 2; i++) {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }

    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
