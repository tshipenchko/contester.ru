#include <iostream>
#include <cstring>
#define MAX_L 100
using namespace std;

void solve(char s[MAX_L]);


int main() {
    char str[MAX_L];
    cin >> str;
    solve(str);


    return 0;
}

void solve (char s[MAX_L]) {
    for (int i = 0, n = int(strlen(s)); i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') cout << char(s[i] - 32);
        else if (s[i] >= 'A' && s[i] <= 'Z') cout << char(s[i] + 32);
        else continue;
    }
}
