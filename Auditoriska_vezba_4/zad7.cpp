#include <iostream>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b<=c) || (a+c<=b) || (b+c<=b)){
        cout<<"Ne moze da se konstruira triagolnik";
    }
    else if(a==b && a==c){
        cout<<"Ramnostran triagolnik";
    } else if(a==b && b==c && c!=a){
        cout<<"Tapoagolen triagolnik";
    }
}