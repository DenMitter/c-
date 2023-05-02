#include <iostream>
#include <string>

using namespace std;

int countOccurrences(string text, string word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }
    return count;
}

int countSentences(string text) {
    int count = 0;
    for (char c : text) {
        if (c == '.' || c == '?' || c == '!') {
            count++;
        }
    }
    return count;
}

int countPunctuation(string text) {
    int count = 0;
    for (char c : text) {
        if (c == '.' || c == ',') {
            count++;
        }
    }
    return count;
}

string reverseText(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

string reverseSentences(string text) {
    string reversed = "";
    size_t start = 0;
    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            string sentence = text.substr(start, i - start + 1);
            string reversedSentence = reverseText(sentence);
            reversed += reversedSentence;
            start = i + 1;
        }
    }
    return reversed;
}

int main() {
    string text = "This is some text. It has multiple sentences. Some of them end with periods, while others end with question marks? And some even end with exclamation points!";

    int countSome = countOccurrences(text, "some");
    cout << "The word 'some' appears " << countSome << " times in the text." << endl;

    int countSent = countSentences(text);
    cout << "The text has " << countSent << " sentences." << endl;

    int countPunct = countPunctuation(text);
    cout << "The text has " << countPunct << " periods and commas." << endl;

    string reversedText = reverseText(text);
    cout << "Reversed text: " << reversedText << endl;

    string reversedSentences = reverseSentences(text);
    cout << "Reversed sentences: " << reversedSentences << endl;

    return 0;
}
