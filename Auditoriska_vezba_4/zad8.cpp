#include <iostream>
using namespace std;
int main(){
    char znak;
    cin>>znak;
    switch (znak) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cout<<"Vnesen e validen izraz = "<<znak;
            break;
        default:
            cout<<"Vneseno e nesto razlicno od cifra i bukva = "<<znak;
    }
}