#include <iostream>
#include <cstring>
#define N 3
#define M 101
using namespace std;

char * compare(char *, char *);


int main() {
    char arr[N][M];
    for (int i = 0; i < N; ++i) { // NOLINT(modernize-loop-convert)
        cin >> arr[i];
    }

    char *maxPtr = arr[0];
    for (int i = 1; i < N; ++i) { // NOLINT(modernize-loop-convert)
        maxPtr = compare(maxPtr, arr[i]);
    }

    cout << maxPtr;

    return 0;
}

char * compare(char *first, char *second) {
    size_t firstLen = strlen(first);
    size_t secondLen = strlen(second);

    if (firstLen > secondLen) return first;
    if (secondLen > firstLen) return second;

    for (size_t i = 0; i < firstLen; ++i) {
        if (second[i] > first[i]) return second;
    }

    return first;
}
