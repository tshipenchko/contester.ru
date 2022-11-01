#include <iostream>
#include <cstring>
#define N 1001
using namespace std;

int main() {
    char str[N];
    cin.getline(str, N);
    char pattern[] = "AITU";

    int l = (int)strlen(str);
    for (int i = 0; i < l; ++i) {
        str[i] = (char)toupper(str[i]);
    }

    char *ptr = strstr(str, pattern);
    cout << (ptr != NULL ? "YES" : "NO"); // NOLINT(modernize-use-nullptr)

    return 0;
}
