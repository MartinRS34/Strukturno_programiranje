#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    //cout<<x<<y;
    if(x>0 && y>0){
        cout<<"I kvadrant";
    } else if(x<0 && y>0){
        cout<<"II kvadrant";
    } else if(x<0 && y<0){
        cout<<"III kvadrant";
    } else{
        cout<<"IV kvadrant";
    }
}