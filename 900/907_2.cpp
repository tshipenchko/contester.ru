#include <iostream>
#include <cstring>
#define N 3
#define M 101
using namespace std;

int main() {
    char arr[N][M];
    for (int i = 0; i < N; ++i) { // NOLINT(modernize-loop-convert)
        cin >> arr[i];
    }

    char *maxPtr = arr[0];
    size_t maximum;
    size_t current;

    for (int i = 0; i < N; ++i) { // NOLINT(modernize-loop-convert)
        maximum = strlen(maxPtr);
        current = strlen(arr[i]);
        if ( current > maximum) {
            maxPtr = arr[i];
        } else if (current == maximum) {
            for (int j = 0; j < current; ++j) {
                if (arr[i][j] > maxPtr[j]) {
                    maxPtr = arr[i];
                    break;
                }
            }
        }
    }

    cout << maxPtr;

    return 0;
}
