#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int start, end, num = 0;

    cout << "start -> ";
    cin >> start;
    cout << "end -> ";
    cin >> end;

    while(start < end) {
        cout << num << endl;
        num += start;
        start++;
    }
    cout << "Результат\t—\t" + num;
    return 0;
}