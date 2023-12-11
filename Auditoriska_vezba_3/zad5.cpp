#include <iostream>

using namespace std;
int main(){
    int cena,rata;
    float kamata;
    cin>>cena>>rata>>kamata;
    kamata=kamata/100+1;
    float vkupnaCena=cena*kamata;
    cout<<"Mesecno rata na isplakanje so kamata ke e: "<<vkupnaCena/rata<<endl;
    cout<<"Vkupnata cena za proizvodot so kamata e: "<<vkupnaCena;
}