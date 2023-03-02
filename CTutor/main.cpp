#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int start, end;

    cout << "start -> ";
    cin >> start;
    cout << "end -> ";
    cin >> end;

    for (int i = start; i < end; i++) {
        if (i % 2 == 0) {
            cout << i << "\t—\tПарне\n";
        }
        else if (i % 2 != 0 && i != 7) {
            cout << i << "\t—\tНе парне\n";
        }
        else if (i % 7 == 0) {
            cout << i << "\t—\tКратне 7-ми\n";
        }
    }
    return 0;
}