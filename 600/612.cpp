#include <iostream>
#include <cstring>
#define MAX_L 100
using namespace std;

void capitalized(char s[MAX_L]);


int main() {
    char str[MAX_L];
    cin >> str;
    capitalized(str);
    cout << str;

    return 0;
}

void capitalized(char s[MAX_L]) {
    for (int i = 0, n = int(strlen(s)); i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
}
