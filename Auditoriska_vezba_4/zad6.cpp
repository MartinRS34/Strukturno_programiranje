#include <iostream>

using namespace std;
int main(){
    int kuceska_godina,kuceska_godina1;
    float kuceska_godina2=10.5;
    cin>>kuceska_godina;
    if(kuceska_godina<0){
        cout<<"Vozrasta mora da bide pozitiven broj";
    }
    else if(kuceska_godina>0){
        kuceska_godina1=4*(kuceska_godina-2)+(2*kuceska_godina2);
    }
    cout<<kuceska_godina1;
}