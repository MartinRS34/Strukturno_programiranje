#include <iostream>
using namespace std;
int main()
{
    int c1, c2;
    const int n = 1000;
    for(cout<<(c1 = c2 = 1);
    c2<n;
    c1 = (c2 += c1) -c1)
        cout<<' '<<c2;
    cout<<endl;
    return(0);
}