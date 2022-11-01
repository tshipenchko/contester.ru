#include <iostream>
#include <cstring>
#define N 1001
using namespace std;

bool solve(char *);


int main() {
    char num[N];
    cin >> num;
    cout << (solve(num) ? "YES" : "NO");

    return 0;
}

bool solve(char *num) {
    int l = (int)strlen(num);
    int sum = 0;
    for (int i=0; i < l; ++i) sum += (num[i] - '0') * (i % 2 == 0 ? 1 : -1);
    return (sum % 11 == 0);
}
