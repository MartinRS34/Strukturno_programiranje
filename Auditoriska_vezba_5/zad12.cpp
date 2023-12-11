#include <iostream>

using namespace std;

int main() {
    int sum = 0, n, ostatok = 0, current = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> current;
        ostatok = current % 5;
        if (ostatok == 0) {
            cout << "----" << endl;
        } else if (ostatok == 1) {
            cout << ".---" << endl;
        } else if (ostatok == 2) {
            cout << "..--" << endl;
        } else if (ostatok == 3) {
            cout << "...-" << endl;
        } else if (ostatok == 4) {
            cout << "...." << endl;
        } else {
            cout << "Vnesen e nevaliden broj";
        }
    }
}
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    switch (n) {
//        case 1: '----';
//    }
//}