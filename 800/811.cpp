#include <iostream>
#include <cstring>
#define N 10000
using namespace std;

int main() {
    char str[N];
    cin >> str;

    for (int i = 0, n = (int) strlen(str), l = n/2; i < l; ++i) {
        if (*(str+i) != *(str+n-i-1)) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
