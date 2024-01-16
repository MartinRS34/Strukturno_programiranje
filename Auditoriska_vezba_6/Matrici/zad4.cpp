//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, m, matrix[100][100];
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//
////    for (int i = 0; i < n; ++i) {
////        for (int j = 0; j < m; ++j) {
////            cout << matrix[i][j] << " ";
////        }
////        cout << endl;
////    }
//
//    int brojac = 0, brojac1 = 0;
//    for (int i = 1; i <= n - 1; ++i) {
//        for (int j = 1; j <= m - 1; ++j) {
//            if (matrix[i][j] == 1) {
//                brojac++;
//            }
//            if (brojac ==) {
//                brojac1++;
//            }
//        }
//    }
//    cout << brojac << " " << brojac1;
//}
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Внеси ги елементите во матрицата
    int matrix[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int countX = 0;

    // Провери за појавувања на обликот "X"
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (matrix[i][j] == 1 ||
                matrix[i - 1][j - 1] == 1 ||
                matrix[i - 1][j + 1] == 1 ||
                matrix[i + 1][j - 1] == 1 ||
                matrix[i + 1][j + 1] == 1){

                // Проверка дали обликот е уникатен
                bool uniqueX = true;
                for (int k = 1; k < n - 1 && k < m - 1; ++k) {
                    if (matrix[i - k][j - k] == 1 ||
                        matrix[i - k][j + k] == 1 ||
                        matrix[i + k][j - k] == 1 ||
                        matrix[i + k][j + k] == 1) {
                        uniqueX = false;
                        break;
                    }
                }
                if (uniqueX) {
                    countX++;
                }
            }
        }
    }
    cout << "Brojot na pojavuvanja na oblikot 'X' e: " << countX << endl;

    return 0;
}
