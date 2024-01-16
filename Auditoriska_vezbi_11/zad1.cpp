#include <cstdio>
#include <iostream>

using namespace std;

int count_char(char str[], char c) {
    int vkupno = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) vkupno++;
    }
    return vkupno;
}

int main() {
    int MAX = 100;
    char s[MAX], c;
    fgets(s, MAX, stdin);
    cin >> c;
    cout << count_char(s, c);
    return 0;
}