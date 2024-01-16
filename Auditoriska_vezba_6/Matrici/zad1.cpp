#include <iostream>

using namespace std;

int zbirNaNeparniKoloni(int n, int m, int matrix[100][1000]) {
    int zbir_j = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j % 2 != 0) {
                zbir_j += matrix[i][j];
            }
        }
        cout << endl;
    }
    return zbir_j;
}

int zbirNaParniRedici(int n, int m, int matrix[100][100]) {
    int zbir_i = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0) {
                zbir_i += matrix[i][j];
            }
        }
    }
    return zbir_i;
}

int razlika(int n, int m, int matrix[100][100]) {
    int sum_i = zbirNaNeparniKoloni(n, m, matrix);
    int sum_j = zbirNaParniRedici(n, m, matrix);
    int difference = sum_i - sum_j;
    return difference;
}


int main() {
    int zbir_j = 0;
    int zbir_i = 0;
    int n, m;
    int matrix[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << zbirNaNeparniKoloni(n, m, matrix);
    cout << zbirNaParniRedici(n, m, matrix);
    cout << razlika(n,m,matrix);
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << " " << endl;
//    }

//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (j % 2 != 0) {
//                zbir_j += matrix[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << zbir_j << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (i % 2 == 0) {
//                zbir_i += matrix[i][j];
//            }
//        }
//    }

//    cout << zbir_i << endl;
//    cout << zbir_i - zbir_j << endl;
}
