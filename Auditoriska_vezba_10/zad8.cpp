#include <iostream>
#include <cmath>

using namespace std;

int isAscending(int num, int prevDigit) {
    if (num == 0) {
        return 1;
    }

    int lastDigit = num % 10;

    if (lastDigit < prevDigit) {
        return isAscending(num / 10, lastDigit);
    } else {
        return 0;
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        int result = isAscending(num, 10);
        cout << result << endl;
    }

    return 0;
}

