#include <iostream>

using namespace std;

bool isIncresing(int m, int array[]) {
    for (int i = 0; i < m - 1; ++i) {
        if (array[i] >= array[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isDecresing(int m, int array[]) {
    for (int i = 0; i < m - 1; ++i) {
        if (array[i] <= array[i + 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    int niza[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

    if (isIncresing(n, niza)) {
        cout << "Rastecka";
    } else if (isDecresing(n, niza)) {
        cout << "Opagjacka";
    } else {
        cout << "Nitu rastecka, nitu opagjacka";
    }
}