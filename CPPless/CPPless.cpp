#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    float profit, total_profit = 0;

    for (int i = 1; i <= 6; ++i) {
        cout << "������ �������� �� " << i << "-�� �����: ";
        cin >> profit;
        total_profit += profit;
    }

    cout << "\n��������� �������� �� 6 ������: " << total_profit << endl;
    return 0;
}
