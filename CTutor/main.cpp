#include <iostream>
using namespace std;

int main() {
    double length, width, height, volume;

    // Запитати користувача ввести довжину, ширину та висоту
    cout << "enter -> :\n";
    cout << "length (sm) -> ";
    cin >> length;
    cout << "width (sm) -> ";
    cin >> width;
    cout << "height (sm) -> ";
    cin >> height;

    // Обчислити об'єм паралелепіпеда
    volume = length * width * height;

    // Вивести результат на екран
    cout << "result: " << volume << " cub. sm.\n";

    return 0;
}