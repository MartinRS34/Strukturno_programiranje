#include <iostream>
using namespace std;
int main(){
    int n,n1[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>n1[i];
    }
    int temp;
    temp=n1[n-1];
    for (int i = n-1; i > 0; --i) {
        n1[i]=n1[i-1];
    }
    n1[0]=temp;
    for (int i = 0; i < n; ++i) {
        cout<<n1[i];
    }
}