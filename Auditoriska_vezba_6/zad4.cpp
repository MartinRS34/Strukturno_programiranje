#include <iostream>

using namespace std;

bool brojot_e_prost(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int zbir_na_cifri_od_prost_broj(int num) {
    int c1 = 0;
    while (num > 0) {
        c1 += num % 10;
        num /= 10;
    }
    return c1;
}

int main() {
    int prost = 0;
    int zbir = 0;
    int brojac = 0;
    int broj;
    for (int i = 2; i <= 10000; ++i) {
        if (brojot_e_prost(i)) {
            int zbir_cifri = zbir_na_cifri_od_prost_broj(i);
            if (brojot_e_prost(zbir_cifri)) {
                cout << "Brojot e prost: " << i << " zbirot na negovite cifri e: " << zbir_cifri << endl;
                brojac++;
            }
        }
    }
    cout << "Takvi broevi ima: " << brojac << endl;
    return 0;
}