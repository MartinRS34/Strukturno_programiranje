#include <iostream>

using namespace std;

int main() {
    int number;
    int zbir = 0;
    float average = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> number;
        zbir += number;
        //cout << average;
    }
    average = (float) zbir / 10;
    cout << average;
    for (int i = 0; i < 10; ++i) {
        cin >> number;
        if (number < average) {
            cout << number << "Brojot e pod prosekot" << endl;
        } else{
            cout << number << "Brojot e nad prosekot" << endl;
        }
    }
}