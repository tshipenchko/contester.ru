#include <iostream>
#include <cmath>
using namespace std;

struct Result {
    int index1;
    int index2;
};

Result solve(const int arr[], int n);


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Result result = solve(arr, n);
    cout << ++result.index1 << ' ' << ++result.index2;

    return 0;
}

Result solve(const int arr[], int n) {
    Result result = {};
    result.index1 = 0;
    result.index2 = 1;

    int min = abs(arr[0] - arr[1]);
    int current;
    for (int i = 0; i < n - 1; ++i) {
        current = abs(arr[i] - arr[i + 1]);
        if (current < min) {
            min = current;
            result.index1 = i;
            result.index2 = i + 1;
        }
    }
    current = abs(arr[0] - arr[n - 1]);
    if (current < min) {
        result.index1 = 0;
        result.index2 = n - 1;
    }

    return result;
}
