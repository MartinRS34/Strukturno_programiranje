#include <iostream>

using namespace std;

int main() {
    int n1, n2,i;
    int a[100], b[100];
    cin >> n1 >> n2;
    if (n1 != n2) {
        cout << "Nizite se razlicni";
    }
    else {
        for (int i = 0; i < n1; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n2; ++i) {
            cin >> b[i];
        }
        bool flag=1;
        for (int i = 0; i < n1; ++i) {
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"Elementite na nizite se ednakvi";
        } else{
            cout<<"Elementite na nizite ne se endakvi";
        }
    }
}