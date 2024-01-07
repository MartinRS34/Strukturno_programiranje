#include <iostream>

using namespace std;

//resenie so rekurzija
int form(int n) {
    if (n == 0) {
        return 0;
    } else {
        int i;
        for (i = 0; i < n; i++) {
            cout << "*";
        }
        cout << "";
        return form(n - 1);
    }
}

// resenie bez rekurzija
//    for (int i = n; i > 0; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//}
int main() {
    int n;
    cin >> n;
    form(n);
}