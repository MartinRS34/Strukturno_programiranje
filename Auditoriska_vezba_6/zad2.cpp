#include <iostream>

using namespace std;

int delime_broj(int broj) {
    int zbir=broj/100 + broj%100;
    return zbir;
}
int main() {
    int count=0;
    for (int i = 1000; i <= 9999; ++i) {
        int zbir = delime_broj(i);
        if (i % delime_broj(i) == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout<<"Vkupno takvi broevi se: "<<count;
}
