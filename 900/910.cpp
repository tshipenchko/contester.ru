#include <iostream>
#include <cstring>
#define N 10001
using namespace std;

int solve(const char *);


int main() {
    char arr[N];
    cin.getline(arr, N);
    cout << solve(arr);
    return 0;
}

int solve(const char *arr) {
    int len = (int)strlen(arr);
    int count = 0;

    for (int i = 0; i < len - 5; i++) {
        if (*(arr + i) == '>' && *(arr + i + 1) == '>' && *(arr + i + 2) == '-' && *(arr + i + 3) == '-' &&
            *(arr + i + 4) == '>') {
            count++;
        }
        if (*(arr + i) == '<' && *(arr + i + 1) == '-' && *(arr + i + 2) == '-' && *(arr + i + 3) == '<' &&
            *(arr + i + 4) == '<') {
            count++;
        }
    }
    return count;
}
