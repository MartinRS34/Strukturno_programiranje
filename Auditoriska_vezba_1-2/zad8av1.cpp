#include <iostream>
using namespace std;
int main(){
    //za da vneseme na pocetok golema bukva i na izlez da dobieme mala bukva rabotie so operacija (a+('A'-'a'))
    char a;
    cin>>a;
    cout<< "malo se pisuva "<<char (a+('a'-'A'))<<endl;
}