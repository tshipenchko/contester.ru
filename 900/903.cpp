#include <iostream>
#include <cstring>
#define N 100
using namespace std;

void solve(const char*, char*, int, int);


int main() {
    char *source = new char[N];
    cin.getline(source, N);
    int len = (int)strlen(source);
    int dest_len = len + len / 3 + (len % 3 != 0);
    char *dest = new char[dest_len];
    solve(source, dest, len, dest_len);

    cout << dest;

    return 0;
}

void solve(const char *source, char *dest, const int len, const int dest_len) {
    int mod = 3 - len % 3;
    int shift = 0;

    for (int i = 0; i < len; ++i) {
        if (i != 0 && (i + mod) % 3 == 0) {
            dest[i + shift] = ' ';
            ++shift;
        }
        dest[i + shift] = source[i];
    }
}
