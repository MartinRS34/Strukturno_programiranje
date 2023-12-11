#include <iostream>

using namespace std;
int main(){
    int x,n,y=1,counter=0;
    cin>>x>>n;
    while (counter<n){
        y*=x;
        counter++;
    }
    cout<<x<<"^"<<n<<"="<<y;
}