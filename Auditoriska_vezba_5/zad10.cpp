#include <iostream>

using namespace std;

int main() {
    int broj, max, tmp, n;
    if (cin >> broj >> max) {
        if (max > broj) {
            tmp = broj;
            broj = max;
            max = tmp;
        }
        while (cin >> n) {
            if (n > broj) {
                max = broj;
                broj = n;
            } else if (n > max) {
                max = n;
            }
        }
        cout << broj << " " << max;
    }
}
