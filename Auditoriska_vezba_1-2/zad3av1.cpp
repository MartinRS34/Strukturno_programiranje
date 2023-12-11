#include <iostream>
using namespace std;
int main(){
    float s=0, a=5, b=7.5, c=10.2, L=0, P=0;
    //int a=5, b=2.5, c=10.2,L=0;
    L=a+b+c;
    cout<<"L = "<<L<<endl;
    s=L/2;
    P = s*(s-a)*(s-b)*(s-c);
    cout<<"s = "<<s<<endl;
    cout<<"P = "<<P;

}