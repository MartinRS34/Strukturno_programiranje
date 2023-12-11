#include <iostream>
using namespace std;
int main() {
    int broj, sum = 0;
    do {
        cin >> broj;
        sum += broj;
    }
    while (broj != 0);
        cout<<sum;
}