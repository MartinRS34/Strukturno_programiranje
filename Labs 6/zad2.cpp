#include <iostream>

using namespace std;

int main() {
    int n, i;
    int niza[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            niza[i] *= 2;
        } else if(i%2!=0){
            niza[i] += 2;
        }
    }
    cout << "Transformirana niza: ";
    for (int i = 0; i < n; ++i) {
        cout << niza[i] << " ";
    }
}