#include <iostream>

using namespace std;
int main(){
    int year;
    cin>>year;
    //cout<<year;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<"Godinata e prestapna";
    } else{
        cout<<"Godinata ne e restapna";
    }
}