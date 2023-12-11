#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0, number = 0, i, sum_odd_positions = 0, sum_even_positions = 0, total = 0;
    cin >> n;

    for (i = 1; i <= n; ++i) {
        cin >> number;
        if (i % 2) {
            sum_odd_positions += number;
        } else {
            sum_even_positions += number;
        }
    }


    total = sum_even_positions - sum_odd_positions;

    if (total < 10) {
        cout << "Dvete sumi se slicni";
    } else {
        cout << "Dvete sumi mnogu se razlikuvaat";
    }

    return 0;
}
