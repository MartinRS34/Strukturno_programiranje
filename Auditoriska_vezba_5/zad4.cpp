#include <iostream>
using namespace std;
int main(){
    int n,number,div0=0,div1=0,div2=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>number;
        if(number%3==0){
            div0++;
        }
        if(number%3==1) {
            div1++;
        }
        if(number%3==2){
            div2++;
        }
    }
    cout<<"Deliteli so ostatok 0: "<<div0<<endl<<"Deliteli so ostatok 1: "<<div1<<endl<<"Deliteli so ostatok 2: "<<div2;
}