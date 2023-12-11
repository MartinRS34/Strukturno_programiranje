#include <iostream>

using namespace std;
int main(){
    int najmalku_znacajna_cifra=0,number,najznacajna_cifra=0;
    cin>>number;
    najznacajna_cifra=number%10;
    najmalku_znacajna_cifra=number=number/100;
    cout<<"Najznacajna cifra e: "<<najznacajna_cifra<<", najmalku nacajna cifra e: "<<najmalku_znacajna_cifra;

}