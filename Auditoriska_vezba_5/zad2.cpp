//#include <iostream>
//
//using namespace std;
//int main(){
//    int a=11,sum=0;
//    for (int i = a; i < 100; i+=2) {
//        cout<<i;
//        if(i<99){
//            cout<<" + ";
//        }
//        sum+=i;
//    }
//    cout<<" = "<< sum;
//}
#include <iostream>

using namespace std;
int main(){
    int a=11,sum=0;
    while (a<100){
        cout<<" + "<<a;
        sum+=a;//11
        a+=2;//11+2=13
    }
    cout<<" = "<<sum;
}
