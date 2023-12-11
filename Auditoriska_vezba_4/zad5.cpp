#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int a,b,c,temp,s;
    float L=0,h=0;
    cin>>a>>b>>c;
    if((a+b<=c) || (a+c<=b) || (b+c<=a)){
        cout<<"Ne moze da se konstruira triagolnik";
    } else {
        if (a == b && b == c) {
            cout << "Ramnostran triagolnik";
        } else if (a == b && b < c) {
            cout << "Ramnokrak triagolnik";
        } else if (a != b && a != c && b != c) {
            cout << "Raznokrak triagolnik";
        }
        L=a+b+c/2;
        h=sqrt(s*((s-a)*(s-b)*(s*-c)));
        cout<<"Plostinata e:"<<h;
    }
}