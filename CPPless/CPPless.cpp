#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    float profit, total_profit = 0;

    for (int i = 1; i <= 6; ++i) {
        cout << "¬вед≥ть прибуток за " << i << "-ий м≥с€ць: ";
        cin >> profit;
        total_profit += profit;
    }

    cout << "\n«агальний прибуток за 6 м≥с€ц≥в: " << total_profit << endl;
    return 0;
}
