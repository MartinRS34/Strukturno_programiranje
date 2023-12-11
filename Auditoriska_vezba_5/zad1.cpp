#include <iostream>
using namespace std;
int main(){
    int a,sum=0;
    for (int i = 10; i < 100; i+=2) {
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<sum;
}
/*  Vtor nacin!!!!
 *  #include <iostream>

using namespace std;
int main(){
    int a=10,sum=0;
    while (a<=98){
        sum+=a;
        a+=2;
    }
    cout<<sum;
}*/