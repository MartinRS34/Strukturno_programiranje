#include <iostream>
using namespace std;
int main(){
    int poeni;
    cin>>poeni;
    if(poeni<50){
        cout<<"5";
    }else if(poeni<=60){
        cout<<"6";
    }else if(poeni<=70) {
        cout << "7";
    }else if(poeni<=80) {
        cout << "8";
    }else if(poeni<=90){
        cout<<"9";
    } else{
        cout<<"10";
    }
}
