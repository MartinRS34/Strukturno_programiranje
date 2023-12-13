#include <iostream>

using namespace std;

int main() {
    int temp, n, m, n1[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> n1[i];
    }
    for (int j = 0; j < m; ++j) {
        temp = n1[n - 1];
        for (int i = n - 1; i > 0; --i) {
            n1[i]=n1[i-1];
        }
        n1[0]=temp;
    }
    for (int i = 0; i < n; ++i) {
        cout<<n1[i];
    }
}