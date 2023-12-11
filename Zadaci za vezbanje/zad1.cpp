#include <iostream>

using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 999; i < 10000; ++i) {
        if(i%a==0)
            cout<<i<<" ";
    }
}