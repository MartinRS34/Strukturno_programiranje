//
// Created by mrozi on 1/7/2024.
//

#include <iostream>

using namespace std;

float parniPozicii(int m, int array[]) {
    int brojac = 0, brojac1 = 0;
    int sum_p = 0, sum_n = 0;
    for (int i = 0; i < m; ++i) {
        if (array[i] % 2 == 0) {
            brojac++;
            sum_p += array[i];
        } else {
            brojac1++;
            sum_n += array[i];
        }
    }
    cout << sum_p << " " << sum_n << endl;
    float average = brojac / (float) brojac1;
    return average;
}


int main() {
    int n;
    int niza[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }
    float oddPosition = parniPozicii(n, niza);
    cout << oddPosition << endl;

    return 0;
}