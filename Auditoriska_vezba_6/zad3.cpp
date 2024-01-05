#include <iostream>

using namespace std;

bool e_prost_broj(int number) {
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

int najblizok_prost(int number) {
    int i = number + 1;
    while (true) {
        if (e_prost_broj(i)) {
            return i - number;
        }
        ++i;
    }
}

int main() {
    int broj;
    cin >> broj;
    int razlika = najblizok_prost(broj);
    cout << "Najbliskiot pogolem prost broj e: " << broj + razlika << " - " << broj << " = " << razlika;
    return 0;
}
