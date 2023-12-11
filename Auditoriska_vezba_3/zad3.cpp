#include <iostream>

using namespace std;

int main() {
    int x, y, o, z, r;
    cin >> x >> y >> z;
    r = (x < y || y < z++);
    cout << r<<endl;
    o = (x > y && y < z++);
    cout << o;
}