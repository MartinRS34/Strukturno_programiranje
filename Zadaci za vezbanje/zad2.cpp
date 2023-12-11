#include <iostream>

using namespace std;
int main(){
    int poeni=0,a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    poeni=a+b+c+d+e;
    if(poeni<51){
        cout<<"Predmetot ne e polozen";
    }
    else {
        if (poeni < 60) {
            cout << "Ocena: 6" << ", poeni: " << poeni << endl;
        } else if (poeni < 70) {
            cout << "Ocena: 7" << ", poeni: " << poeni << endl;
        } else if (poeni < 80) {
            cout << "Ocena: 8" << ", poeni: " << poeni << endl;
        } else if (poeni < 90) {
            cout << "Ocena: 9" << ", poeni: " << poeni << endl;
        } else {
            cout << "Ocena: 10" << ", poeni: " << poeni << endl;
        }
        if(poeni%10==0 && poeni<91){
            cout<<"Ima uslov za povisoka ocena";
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
}