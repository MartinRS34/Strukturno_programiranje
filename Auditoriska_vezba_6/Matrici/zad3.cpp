#include <iostream>

using namespace std;

int main() {
    int n, matrix[100][100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int simetricna = 1;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                simetricna = 0;
                break;
            }
        }
        if (!simetricna) {
            break;
        }
    }

    if (simetricna) {
        cout << "Simetricna matrica";
    } else {
        cout << "Nesimetricna matrica";
    }
}
