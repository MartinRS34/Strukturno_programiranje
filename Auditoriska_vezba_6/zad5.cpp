#include <iostream>

using namespace std;

int zbir_na_prvite_broevi(int number) {
    int sum = 0;
    for (int i = 1; i <= number; ++i) {
        sum += i;
    }
    return sum;
}

int faktoriel(int num) {
    int proizvod = 1;
    for (int i = num; i > 0; --i) {
        proizvod *= i;
    }
    return proizvod;

}

int main() {
    int broj,sum,fac;
    cin >> broj;
    int zbir = 0;
    for (int i = 1; i <= broj; ++i) {
        sum = zbir_na_prvite_broevi(i);
        fac= faktoriel(sum);
        zbir+=fac;
    }
    cout<<"Zbirot e: "<<zbir<<endl;
}
