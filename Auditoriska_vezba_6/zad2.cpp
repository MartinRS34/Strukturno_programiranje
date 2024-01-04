#include <iostream>

using namespace std;

int zbir_na_cifrite(int number) {
    int zbir = 0;
    int z1 = number / 100;
    int z2 = number % 100;
    zbir = z1 + z2;
    return zbir;
}


int main() {
    int broj;
    int brojac = 0;
    cin >> broj;
    int deli = zbir_na_cifrite(broj);
    for (int i = 1000; i < 10000; ++i) {
        if (i % deli == 0) {
            brojac++;
        }
    }
    cout << "Zbirot na cifrite e: " << deli << " takvi broevi postojat: " << brojac;
}