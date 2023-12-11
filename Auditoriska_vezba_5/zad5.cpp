#include <iostream>
using namespace std;
int main(){
    int number;
    float n,i=0,div0=0,div1=0,div2=0;
    cin>>n;
    while (i<n){
            cin>>number;
        if(number%3==0){
            div0++;
        }
        else if(number%3==1){
            div1++;
        }else {
            div2++;
        }
        i++;
    }
    cout<<"Delitel so ostatok 0: "<<div0<<endl;
    cout<<"Delitel so ostatok 1: "<<div1<<endl;
    cout<<"Delitel so ostatok 2: "<<div2<<endl;
}