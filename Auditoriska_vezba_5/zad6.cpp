#include <iostream>
using namespace std;
int main(){
    int broj=1000,c0=0,c1=0,c2=0,c3=0;
    //cin>>broj;
    int temp;
    for (int broj = 1000; broj <= 9999; ++broj) {
        c0 = broj % 10;
        c1 = broj % 100 / 10;
        c2 = broj / 100 % 10;
        c3 = broj / 1000;
        int sum = 0;
        sum = c0 + c1 + c2;
        if (sum == c3) {
            cout << c0 << " + " << c1 << " + " << c2 << " = " << sum << endl;
        }
        //cout<<c0<<endl<<c1<<endl<<c2<<endl<<c3;
    }
}