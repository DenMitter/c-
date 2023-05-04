#include <iostream>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void simplify(Fraction& f) {
    int d = gcd(f.numerator, f.denominator);
    f.numerator /= d;
    f.denominator /= d;
}

Fraction add(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction subtract(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction multiply(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction divide(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    simplify(result);
    return result;
}

void print(Fraction f) {
    cout << f.numerator << "/" << f.denominator;
}

int main() {
    Fraction f1 = { 3, 4 };
    Fraction f2 = { 1, 2 };

    Fraction sum = add(f1, f2);
    Fraction difference = subtract(f1, f2);
    Fraction product = multiply(f1, f2);
    Fraction quotient = divide(f1, f2);

    cout << "Sum: ";
    print(sum);
    cout << endl;

    cout << "Difference: ";
    print(difference);
    cout << endl;

    cout << "Product: ";
    print(product);
    cout << endl;

    cout << "Quotient: ";
    print(quotient);
    cout << endl;

    return 0;
}
