#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int countOccurrences(const string& text, const string& word) {
    int count = 0;
    size_t pos = text.find(word, 0);
    while (pos != string::npos) {
        ++count;
        pos = text.find(word, pos + word.length());
    }
    return count;
}

int countSentences(const string& text) {
    int count = 0;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            ++count;
        }
    }
    return count;
}

int countDotsAndCommas(const string& text) {
    int count = 0;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == '.' || text[i] == ',') {
            ++count;
        }
    }
    return count;
}

string reverseText(const string& text) {
    string reversed;
    for (size_t i = text.length(); i > 0; --i) {
        reversed += text[i - 1];
    }
    return reversed;
}

string reverseSentences(const string& text) {
    string reversed;
    string sentence;
    for (size_t i = 0; i < text.length(); ++i) {
        sentence += text[i];
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            reversed += reverseText(sentence);
            sentence = "";
        }
    }
    if (sentence.length() > 0) {
        reversed += reverseText(sentence);
    }
    return reversed;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    string word;
    cout << "Enter word to count occurrences: ";
    cin >> word;

    int occurrences = countOccurrences(text, word);
    cout << "Occurrences of \"" << word << "\": " << occurrences << endl;

    int sentences = countSentences(text);
    cout << "Number of sentences: " << sentences << endl;

    int dotsAndCommas = countDotsAndCommas(text);
    cout << "Number of dots and commas: " << dotsAndCommas << endl;

    string reversedText = reverseText(text);
    cout << "Reversed text: " << reversedText << endl;

    string reversedSentences = reverseSentences(text);
    cout << "Reversed sentences: " << reversedSentences << endl;

    return 0;
}
