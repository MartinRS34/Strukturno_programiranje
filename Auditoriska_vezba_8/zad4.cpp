#include <iostream>

using namespace std;

int main() {
    int n[100], n1, zbir_p = 0,zbir_n=0,paren_brojac=0,neparen_brojac=0;
    cin >> n1;
    for (int i = 0; i < n1; ++i) {
        cin >> n[i];
    }
    for (int i = 0; i < n1; ++i) {
        if (n[i] % 2 == 0) {
            paren_brojac++;
            zbir_p += n[i];
        } else {
            neparen_brojac++;
            zbir_n += n[i];
        }
    }
    cout<<"Parni broevi: "<<zbir_p<<endl;
    cout<<"Neparni broevi: "<<zbir_n<<endl;
    cout<<"Rel: "<<(float)paren_brojac/neparen_brojac;
}