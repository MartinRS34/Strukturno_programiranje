#include <iostream>
using namespace std;

float diametar(int d){
    return 2*d;
}

float perimetar(int p){
    return 2*p*3.14;
}

float plostina(int pp){
    return pp*pp*3.14;
}

int main(){
    int radius;
    cin>>radius;
    float diam=0;
    diam= diametar(radius);
    float peri=0;
    peri= perimetar(radius);
    float plost=0;
    plost= plostina(radius);

    cout<<"Diametar: "<<diam<<endl<<"Perimetar: "<<peri<<endl<<"Plostina:"<<plost;
}