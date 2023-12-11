#include <iostream>

using namespace std;

int main() {
    int broj, b1, number1;
    int i, op,tmp;
    cin >> broj >> number1;
    for (int i = broj; i < number1; ++i) {
        tmp = i;
        op = 0;
        while (tmp > 0) {
            b1 = tmp % 10;
            op = op * 10 + b1;
            tmp /= 10;
        }
        if (op == i) {
            cout << i;
        }
    }
}
