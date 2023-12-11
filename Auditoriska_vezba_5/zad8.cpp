#include <iostream>

using namespace std;

int main() {
    int broj,max;
    if (cin >> max) {
        while (cin >> broj) {
            if (max<broj) {
                max=broj;
            }
            cout << max;
        }
    }
}