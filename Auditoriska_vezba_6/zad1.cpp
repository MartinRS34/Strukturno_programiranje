#include <iostream>

using namespace std;

float diametar(int d) {
    return 2 * d;
}

float perimetar(int p) {
    return 2 * p * 3.14;
}

float plostina(int pp) {
    return pp * pp * 3.14;
}

int main() {
    int radius;
    cin >> radius;
    float D = diametar(radius);
    float L = perimetar(radius);
    float P = plostina(radius);

    cout << "Diametar: " << D << endl << "Perimetar: " << L << endl << "Plostina: " << P;
}