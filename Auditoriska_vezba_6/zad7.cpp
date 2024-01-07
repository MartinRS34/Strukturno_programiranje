#include <iostream>

using namespace std;

int reverseNumber(int number) {
    int sum = 0;
    while (number > 0) {
        sum = sum * 10 + number % 10;
        number /= 10;
    }
    return sum;
}

int isPalindrom(int number) {
    if (number == reverseNumber(number)) {
        return 1;
    } else {
        return 0;
    }
}

int containsNumber(int number) {
    if (number == 0) {
        return 1;
    }
    int cifra = number % 10;
    if (cifra != 0 && cifra != 1 && cifra != 2 && cifra != 3 && cifra != 4) {
        return 0;
    }
    return containsNumber(number / 10);
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        int palindrom = isPalindrom(i);
        int broevi = containsNumber(i);
        if (palindrom) {
            if (broevi)
                cout << i << endl;
        }
    }
}