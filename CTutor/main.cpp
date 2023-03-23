#include <iostream>

using namespace std;

void matrice_init(int matrix[][4], int len) {
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}
void matrice_init(double matrix[][4], int len) {
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}
void matrice_init(char matrix[][4], int len) {
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void matrice_print(int matrix[], int len) {
    for (size_t i = 0; i < len; i++) {
        cout << matrix[i] << "\t";
    }
    cout << endl;
}
void matrice_print(double matrix[], int len) {
    for (size_t i = 0; i < len; i++) {
        cout << matrix[i] << "\t";
    }
    cout << endl;
}
void matrice_print(char matrix[], int len) {
    for (size_t i = 0; i < len; i++) {
        cout << matrix[i] << "\t";
    }
    cout << endl;
}

int matrice_max(int matrix[][4], int len) {
    int max = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
    }
    return max;
}
double matrice_max(double matrix[][4], int len) {
    double max = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
    }
    return max;
}
char matrice_max(char matrix[][4], int len) {
    char max = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
    }
    return max;
}

int matrice_min(int matrix[][4], int len) {
    int min = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }
    return min;
}
double matrice_min(double matrix[][4], int len) {
    double min = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }
    return min;
}
char matrice_min(char matrix[][4], int len) {
    char min = matrix[0][0];
    for (size_t i = 0; i < len; i++) {
        for (size_t j = 0; j < len; j++) {
            if (i == j) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }
    return min;
}

int main() {
    return 0;
}
