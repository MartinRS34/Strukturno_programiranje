#include <iostream>
using namespace std;
int main(){
    int poeni,posledna_cifra=0;
    cin>>poeni;
    posledna_cifra=poeni%10;
    if(poeni<=50){
        cout<<"5";
    }else if(poeni<=60){
        cout<<"6";
        if(posledna_cifra>=1 && posledna_cifra<=3){
            cout<<"-";
        }
        else if(posledna_cifra>=4 && posledna_cifra<=7){
            cout<<" ";
        }
        else if(posledna_cifra>=8 || posledna_cifra<=0){
            cout<<"+";
        }
    }else if(poeni<=70) {
        cout << "7";
        if(posledna_cifra>=1 && posledna_cifra<=3){
            cout<<"-";
        }
        else if(posledna_cifra>=4 && posledna_cifra<=7){
            cout<<" ";
        }
        else if(posledna_cifra>=8 || posledna_cifra<=0){
            cout<<"+";
        }
    }else if(poeni<=80) {
        cout << "8";
        if(posledna_cifra>=1 && posledna_cifra<=3){
            cout<<"-";
        }
        else if(posledna_cifra>=4 && posledna_cifra<=7){
            cout<<" ";
        }
        else if(posledna_cifra>=8 || posledna_cifra<=0){
            cout<<"+";
        }
    }else if(poeni<=90){
        cout<<"9";
        if(posledna_cifra>=1 && posledna_cifra<=3){
            cout<<"-";
        }
        else if(posledna_cifra>=4 && posledna_cifra<=7){
            cout<<" ";
        }
        else if(posledna_cifra>=8 || posledna_cifra<=0){
            cout<<"+";
        }
    } else{
        cout<<"10";
        if(posledna_cifra>=1 && posledna_cifra<=3){
            cout<<"-";
        }
        else if(posledna_cifra>=4 && posledna_cifra<=7){
            cout<<" ";
        }
    }
}
