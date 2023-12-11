#include <iostream>
#include <iomanip>

#define PI 3.14

using namespace std;

double dijametar(double radius);

double perimetar(double radius);

double ploshtina(double radius);

int main() {
    double radius, D, L, P;
    cout << "Vnesete radius na krugot: ";
    cin >> radius;

    D = dijametar(radius);
    L = perimetar(radius);
    P = ploshtina(radius);

    cout << "Dijametar na krugot = " << fixed << setprecision(2) << D << endl;
    cout << "Perimetar na krugot = " << fixed << setprecision(2) << L << endl;
    cout << "Ploshtina na krugot = " << fixed << setprecision(2) << P << endl;
    return 0;
}

double dijametar(double radius) {
    return 2 * radius;
}

double perimetar(double radius) {
    return 2 * radius * PI;
}

double ploshtina(double radius) {
    return radius * radius * PI;
}