#include <iostream>

using namespace std;

int main() {
    char a, b, znak;
    cin >> znak;
//    if ((znak >= 'a') && (znak <= 'z'))
//        return 0;
    if (islower(znak))
        cout<<"1";
    else
        cout<<"0";
}