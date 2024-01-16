#include <iostream>

using namespace std;

void countUp(int n){
    if(n==0){
        cout<<0<<" ";
        return;
    } else{
        countUp(n-1);
        cout<<n<<" ";
    }
}


int main() {
    int broj;
    cin >> broj;
    countUp(broj);
}