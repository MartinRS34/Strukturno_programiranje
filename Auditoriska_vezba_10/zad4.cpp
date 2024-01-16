#include <iostream>

using namespace std;

bool prostBroj(int n) {
    if (n < 2) {
        false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int prvPogolemBroj(int n) {
    while (!prostBroj(++n)) {}
    return n;
}
int main() {
    int broj;
    cin >> broj;
    int  poglemBroj= prvPogolemBroj(broj);
    cout<<poglemBroj;
}
