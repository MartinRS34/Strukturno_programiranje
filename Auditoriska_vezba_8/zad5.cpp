#include <iostream>
using namespace std;
int main(){
    int niza[100],n1;
    cin>>n1;
    for (int i = 0; i < n1; ++i) {
        cin>>niza[i];
    }
    bool rastecka=1;
    bool opagjacka=1;
    for (int i = 0; i < n1-1; ++i) {
        if(niza[i]>niza[i+1]){
            rastecka=0;
        }
        if(niza[i]<niza[i+1]){
            opagjacka=0;
        }
    }
    if(rastecka){
        cout<<"Nizata e rastecka";
    } else if(opagjacka){
        cout<<"Nizata e opagjacka";
    } else{
        cout<<"Nitu rastecka nitu opagjacka";
    }
}