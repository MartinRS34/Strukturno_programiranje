#include <iostream>

using namespace std;

int main() {
    int n, n1[100];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> n1[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n;j++) {
            if (n1[i] == n1[j]) {
                for (int k = j; k < n - 1; ++k) {
                    n1[k] = n1[k + 1];
                }
                --n; // Намалување на големината на низата
            } else {
                ++j;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << n1[i] << " ";
    }

    return 0;

}
