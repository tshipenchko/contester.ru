#include <iostream>
#define TARGET 0
using namespace std;

int sumBetweenNumber(int*, int, int);


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << sumBetweenNumber(arr, n, TARGET);

    return 0;
}

int sumBetweenNumber(int* arr, int n, int target) {
    int* ptr = arr;
    int result = 0;
    bool started = false;

    for (int i = 0; i < n; ++i) {
        if (started && *ptr == target) return result;
        if (!started && *ptr == target) started = true;
        if (started) result += *ptr;
        ptr++;
    }

    return result;
}
