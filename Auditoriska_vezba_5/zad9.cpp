#include <iostream>

using namespace std;
int main(){
    int broj,max;
    if(cin>>broj){
        while (cin>>max){
            if(max<broj ){
                max=broj;
            }
            cout<<max<<" ";
            if(max<100){
                cout<<max;
            }else{
                cout<<"Se ignorira";
            }
        }
    }
}