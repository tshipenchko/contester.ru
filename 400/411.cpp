#include <iostream>
using namespace std;

int main() {
    int n, n1;
    cin >> n;
    n1 = n - 1;
    int arr[n];

    for (int i = 2, k = n+1; i < k; ++i) {
        arr[i-2] = i;
    }

    for (int i = 0; i < n1; ++i) {
        if (arr[i] == 0) continue;
        for (int j = i+1; j < n1; ++j) {
            if (arr[j] != 0 && arr[j] % arr[i] == 0) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n1; ++i) {
        if (arr[i] == 0) continue;
        cout << arr[i] << ' ';
    }

    return 0;
}
