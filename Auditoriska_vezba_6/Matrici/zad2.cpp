#include <iostream>

using namespace std;

//resenie so funkcija
int najgolemElement(int n, int m, int matrix[100][100]) {
    int maxElement = matrix[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    return maxElement;
}

int najmanlElement(int n, int m, int matrix[100][100]) {
    int minElement = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (minElement > matrix[i][j]) {
                minElement = matrix[i][j];
            }
        }
    }
    return minElement;
}

int razlika(int n, int m, int matrix[100][100]) {
    int big = najgolemElement(n, m, matrix);
    int small = najmanlElement(n, m, matrix);
    return big - small;
}

void smeniElementiVoGlavnaDijagonala(int n, int m, int matrix[100][100]) {
    int razlikaValue = razlika(n, m, matrix);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == j) {
                matrix[i][j] = razlikaValue;
            }
        }
    }
}

int main() {
    int n, m, matrix[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << najgolemElement(n, m, matrix) << endl;
    cout << najmanlElement(n, m, matrix) << endl;
    cout << razlika(n, m, matrix) << endl;
    smeniElementiVoGlavnaDijagonala(n, m, matrix);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
//    resenie bez funkcija
//    int maxElement = matrix[0][0];
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (matrix[i][j] > maxElement) {
//                maxElement = matrix[i][j];
//            }
//        }
//    }

//    int minElement = matrix[0][0];
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (minElement > matrix[i][j]) {
//                minElement = matrix[i][j];
//            }
//        }
//    }

//    int razlika = maxElement - minElement;
//    cout << razlika << endl;

//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (i == j) {
//                matrix[i][j] = razlika;
//            }
//        }
//    }

}