//
// Created by mrozi on 1/8/2024.
//
#include <iostream>

using namespace std;

void rotation(int n, int niza[], int rotiraj) {
    for (int i = 0; i < rotiraj; ++i) {//i<3
        int temp = niza[n - 1]; //temp=3
        for (int j = n - 1; j > 0; --j) {
            niza[j] = niza[j - 1];
        }
        niza[0] = temp;
    }
}

int main() {
    int n;
    cin >> n;//5
    int niza[100];
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];//12345
    }
    int rotiraj;
    cin >> rotiraj;//3
    rotation(n, niza, rotiraj);
    for (int i = 0; i < n; ++i) {
        cout << niza[i];//34512
    }
}
