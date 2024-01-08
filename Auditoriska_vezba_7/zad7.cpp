//
// Created by mrozi on 1/8/2024.
//
#include <iostream>

using namespace std;


//najdi duplikati
void duplicate(int n, int niza[]) {//11234
    int izbrisi = 0;
    for (int i = 0; i < n; ++i) {//5
        bool isDuplicate = false;
        //proveruvame dali prvio element "niza[i]" e isto so vtoriot elementi "niza[i+1]"
        for (int j = 0; j < i; ++j) {
            if (niza[i] == niza[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            niza[izbrisi++] = niza[i];
        }
    }

    for (int i = 0; i < izbrisi; ++i) {
        cout << niza[i];
    }
}

int main() {
    int n;
    cin >> n;//5
    int niza[100];
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];//11345
    }

    duplicate(n, niza);
}
