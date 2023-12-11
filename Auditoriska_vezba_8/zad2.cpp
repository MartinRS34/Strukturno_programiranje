#include <iostream>

using namespace std;

int main() {
    int n1[100], n2[100];
    int n, i, isti_se = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> n1[i] >> n2[i];
    }
    if (n1 != n2) {
        isti_se = 0;
    } else {
        for (int i = 0; i < n; ++i) {
            if (n1[i] != n2[i]) {
                isti_se = 0;
                break;
            }
        }
    }
    if (isti_se == 1) {
        cout << "Nizite se isti!";
    } else {
        cout << "Nizite se razlicni";
    }
}