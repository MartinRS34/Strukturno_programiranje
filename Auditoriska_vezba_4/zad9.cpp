#include <iostream>
using namespace std;

int main() {
    double broj1, broj2, rezultat;
    char operatorl;

    cout << "Vnesi dva broja (пр. 5 + 3): ";
    cin >> broj1 >> operatorl >> broj2;

    switch (operatorl) {
            case '+':
            rezultat = broj1 + broj2;
            break;
        case '-':
            rezultat=broj1-broj2;
            break;
        case '*':
            rezultat=broj1*broj2;
            break;
        case '/':
            rezultat=broj1/broj2;
            break;
    }
    cout<<broj1<<" "<<operatorl<<" "<<broj2<<" = "<<" "<<rezultat;
    return 0;
}