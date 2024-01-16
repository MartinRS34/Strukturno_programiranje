#include <iostream>

using namespace std;


int izbrojOsmici(int n) {
    if (n == 0) {
        return 0;
    }
    int brojac = 0;
    if (n % 10 == 8) {
        brojac++;
    }
    return brojac + izbrojOsmici(n / 10);
}

int main() {
    int broj;
    cin >> broj;
    int broj1 = izbrojOsmici(broj);
    cout << broj1;
}