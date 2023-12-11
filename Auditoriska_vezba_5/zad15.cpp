#include <iostream>

using namespace std;

int main() {
    int n, number[], tmp, a = 0;
    cin >> n;

    for (int j = 0; j < n; ++j) {
        cin >> number;

        if (number < 10) {
            cout << "Vnesen broj pomal od 10" << endl;
        } else {
            tmp = number;
            while (tmp > 0) {
                a = tmp % 10;
                tmp /= 10;

                if (tmp != 0 && a <= tmp % 10) {
                    continue;
                } else {
                    cout << "Ne e sreden broj" << endl;
                    break;
                }
            }

            if (tmp == 0) {
                cout << "Brojot e sreden" << endl;
            }
        }
    }

    return 0;
}
