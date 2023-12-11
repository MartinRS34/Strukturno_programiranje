#include <iostream>

using namespace std;

int main() {
    int n = 1;
    while (n <= 10) {
        if (n % 2 == 0)
            cout << n << " ";
        n++;
    }
    return 0;
}