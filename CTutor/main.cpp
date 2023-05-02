#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void replaceWord(char* text, const char* search, const char* replace) {
    char* pos = strstr(text, search);
    if (pos) {
        size_t len1 = strlen(search);
        size_t len2 = strlen(replace);
        memmove(pos + len2, pos + len1, strlen(pos + len1) + 1);
        memcpy(pos, replace, len2);
        replaceWord(pos + len2, search, replace);
    }
}

void capitalizeSentences(char* text) {
    bool newSentence = true;
    for (size_t i = 0; i < strlen(text); i++) {
        if (newSentence && isalpha(text[i])) {
            text[i] = toupper(text[i]);
            newSentence = false;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            newSentence = true;
        }
    }
}

void countLettersAndDigits(char* text, int& letters, int& digits) {
    for (size_t i = 0; i < strlen(text); i++) {
        if (isalpha(text[i])) {
            letters++;
        }
        else if (isdigit(text[i])) {
            digits++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    const int MAX_TEXT_LENGTH = 1000;
    char text[MAX_TEXT_LENGTH];

    cout << "Введіть текст: ";
    cin.getline(text, MAX_TEXT_LENGTH);

    char search[MAX_TEXT_LENGTH], replace[MAX_TEXT_LENGTH];
    cout << "Введіть слово, яке потрібно замінити: ";
    cin >> search;
    cout << "Введіть слово, на яке потрібно замінити: ";
    cin >> replace;
    replaceWord(text, search, replace);
    cout << "Результат заміни: " << text << endl;

    capitalizeSentences(text);
    cout << "Текст з капіталізованими реченнями: " << text << endl;

    int letters = 0, digits = 0;
    countLettersAndDigits(text, letters, digits);
    cout << "Кількість літер у тексті: " << letters << endl;
    cout << "Кількість цифр у тексті: " << digits << endl;

    return 0;
}
