#include <iostream>
using namespace std;
int main(){
    int n,zbir=0;
    float prosek=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        zbir+=i;
    }
    prosek=(float)zbir/n;
    cout<<zbir<<" "<<prosek;

}