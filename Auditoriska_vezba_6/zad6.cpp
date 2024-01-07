#include <iostream>

using namespace std;

bool divisibleByK(int number, int k) { //nema potreba od ovaa funkcija
    return number % k == 0;
}

int nextDivisibleByK(int number, int k) {
    while (number % k != 0) {
        number++;
    }
    return number;
}

int main(void) {
    int start, end, divisor;
    cin >> start >> end >> divisor;

    for (int i = start; i <= end; i++) {
        int nextDivisible = nextDivisibleByK(i, divisor);
        cout << i << " -> " << nextDivisible << endl;
    }

    return 0;
}
