#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + sumOfNumbers(n - 1);
    }
}


int factorial(int k) {
    if (k == 0) {
        return 1;
    } else {
        return k * factorial(k - 1);
    }
}

int main() {
    int n, result = 0;
    cin >> n;
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            int s = sumOfNumbers(i);
            result += s;
        }
        int fac = factorial(result);
        cout << "Rezultat: " << result << ", Factorial: " << fac;
    } else {
        cout << "Wrong input";
    }
}
