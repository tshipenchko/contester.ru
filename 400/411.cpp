#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 2; i < n+1; ++i) {
        arr[i-2] = i;
    }

    for (int i = 0; i < n-1; ++i) {
        if (arr[i] == 0) continue;
        for (int j = i+1; j < n-1; ++j) {
            if (arr[j] != 0 && arr[j] % arr[i] == 0) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n-1; ++i) {
        if (arr[i] == 0) continue;
        cout << arr[i] << ' ';
    }

    return 0;
}
