#include <iostream>
#include <cstring>
#define N 10000
using namespace std;

bool compare(char*, size_t, char*, size_t);


int main() {
    char str1[N], str2[N];
    cin >> str1 >> str2;

    cout << ( compare(str1, strlen(str1), str2, strlen(str2)) ? "YES" : "NO" );

    return 0;
}

bool compare(char* str1, size_t size1, char* str2, size_t size2) {
    if (size1 != size2) return false;

    while (*str1 != '\0') {
        if (*str1++ != *str2++) {
            return false;
        }
    }

    return true;
}
