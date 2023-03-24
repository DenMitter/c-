#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 != 0) {
        return true;
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}

int days_between_dates(int day1, int month1, int year1, int day2, int month2, int year2) {
    const int days_in_month[] = { 31, 28 + is_leap_year(year1), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days1 = day1;
    for (int i = 0; i < month1 - 1; i++) {
        days1 += days_in_month[i];
    }
    int days2 = day2;
    for (int i = 0; i < month2 - 1; i++) {
        days2 += days_in_month[i];
    }
    for (int i = year1; i < year2; i++) {
        days2 += 365 + is_leap_year(i);
    }
    return days2 - days1;
}

int main() {
    int day1 = 15;
    int month1 = 3;
    int year1 = 2023;
    int day2 = 24;
    int month2 = 9;
    int year2 = 2024;
    int days = days_between_dates(15, 3, 2023, 24, 9, 2024);
    cout << days << " day " << day1 << "/" << month1 << "/" << year1 << " and " << day2 << "/" << month2 << "/" << year2 << endl;
    return 0;
}
