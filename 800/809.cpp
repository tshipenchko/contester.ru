#include <iostream>
#define N 100
using namespace std;

int sumOfMinMaxEven(const int*, int);


int main() {
    int n, arr[N];
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> *(arr + i);
    cout << sumOfMinMaxEven(arr, n);

    return 0;
}

int sumOfMinMaxEven(const int arr[N], int n) {
    int sum = 0, minimumIndex = 0, minimum = *arr, maximumIndex = 0, maximum = *arr;

    for (int i = 0; i < n; ++i) {
        if (*(arr + i) < minimum) {
            minimum = *(arr + i);
            minimumIndex = i;
        }
        if (*(arr + i) >= maximum) {
            maximum = *(arr + i);
            maximumIndex = i;
        }
    }

    for (int i = min(minimumIndex, maximumIndex) + 1; i < max(minimumIndex, maximumIndex); ++i) {
        if (*(arr + i) % 2 == 0) sum++;
    }

    return sum;
}