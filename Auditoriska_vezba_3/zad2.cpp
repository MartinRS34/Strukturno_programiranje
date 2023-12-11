#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y;
    z = x++ + --y + (x < y);
    cout<<z;
}