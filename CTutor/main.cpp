#include <iostream>
#include <string>


int mystrlen(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char* mystrcpy(char* str1, const char* str2) {
    char* original_str1 = str1;
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return original_str1;
}

char* mystrcat(char* str1, const char* str2) {
    char* original_str1 = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return original_str1;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str1[100] = "Hello";
    char str2[] = " world!";

    printf("%d\n", mystrlen(str1));
    printf("%s\n", mystrcpy(str1, str2));
    printf("%s\n", mystrcpy(str1, str2));
    printf("%s\n", mystrcat(str1, str2));
    printf("%s\n", mystrchr(str1, 'o'));

    return 0;
}