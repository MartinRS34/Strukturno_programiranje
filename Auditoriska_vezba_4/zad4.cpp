#include <iostream>
using namespace std;
int main(){
    int a,b,c,temp;
    cin>>a>>b>>c;
    if((a+b<=c) || (a+c<=b) || (b+c<=a)){
        cout<<"Ne moze da se konstruira triagolnik";
    } else{
        if(a>=b){
            temp=a;
            a=b;
            b=temp;
        }
        else if(a>=c){
            temp=a;
            a=c;
            c=temp;
        }
        else if(b>=c){
            temp=b;
            b=c;
            c=temp;
        }
        if (c*c==b*b+a*a){
            cout<<"Moze da se konstruira pravoagolen triagolnik";
            cout<<"P = "<<a*b/2;
        } else{
            cout<<"Triagolnikot ne e pravoagolen";
        }
    }
}
