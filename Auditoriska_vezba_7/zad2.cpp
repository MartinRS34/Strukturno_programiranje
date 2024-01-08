//
// Created by mrozi on 1/7/2024.
//

#include <iostream>

using namespace std;

bool niziteSeIsti(int n1[], int n, int m, int n2[]) {
    if (n != m) {
        return false;
    }
    for (int i = 0; i < n; ++i) {
        if (n1[i] != n2[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    int niza[100], niza1[100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> niza1[i];
    }

    if (niziteSeIsti(niza1, n, m, niza)) {
        cout << "Nizite se isti" << endl;
    } else {
        cout << "Nizite se razlicni";
    }
}
