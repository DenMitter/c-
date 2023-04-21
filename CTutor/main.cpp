#include <iostream>

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (*str1 == *str2) {
        return 0;
    }
    else if (*str1 > *str2) {
        return 1;
    }
    else {
        return -1;
    }
}

int StringToNumber(char* str) {
    int result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

char* NumberToString(int number) {
    int length = snprintf(NULL, 0, "%d", number);
    char* str = malloc(length + 1);
    snprintf(str, length + 1, "%d", number);
    return str;
}

char* Uppercase(char* str) {
    char* p = str;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    return str;
}

char* Lowercase(char* str) {
    char* p = str;
    while (*p) {
        *p = tolower(*p);
        p++;
    }
    return str;
}

char* mystrrev(char* str) {
    int length = strlen(str);
    char* result = malloc(length + 1);
    int i;
    for (i = 0; i < length; i++) {
        result[i] = str[length - i - 1];
    }
    result[length] = '\0';
    return result;
}
