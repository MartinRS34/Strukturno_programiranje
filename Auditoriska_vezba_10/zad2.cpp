#include <iostream>
using namespace std;

void countDown(int broj){
    if(broj==0){
        return ;
    } else{
        cout<<broj<<" ";
        countDown(broj-1);
    }

}

int main(){
    int n;
    cin>>n;
    countDown(n);
    cout<<"0";
}