#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cout<<i;
    }
    cout<<endl;
    for (int i = n; ; --i) {
        cout<<i;
        if(i==1){
            break;
        }
    }
}