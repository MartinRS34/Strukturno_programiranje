#include <iostream>

using namespace std;

void roturaj(int n, int niza[]) {
    int temp = niza[n - 1];//temp=5
    for (int i = n - 1; i > 0; --i) {//i=4;4>0;4--
        niza[i] = niza[i - 1];//niza[1]=1;niza[2]=2;niza[3]=3;niza[4]=4
    }
    niza[0] = temp;
}

int main() {
    int n;
    int niza[100];
    cin >> n;//5
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];//12345
    }
    roturaj(n, niza);
    for (int i = 0; i < n; ++i) {
        cout << niza[i];
    }
}