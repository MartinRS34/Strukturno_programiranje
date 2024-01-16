#include <iostream>

using namespace std;

int sumOfDigit(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int broj;
    cin >> broj;
    int zbirNaCifri = sumOfDigit(broj);
    cout << zbirNaCifri;
}