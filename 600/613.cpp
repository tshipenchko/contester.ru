#include <iostream>
#include <cstring>
#define MAX_L 100
using namespace std;

void converted(char s[MAX_L]);


int main() {
    char str[MAX_L];
    cin >> str;
    converted(str);
    cout << str;

    return 0;
}

void converted(char s[MAX_L]) {
    for (int i = 0, n = int(strlen(s)); i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}
