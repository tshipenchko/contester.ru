#include <iostream>
using namespace std;

int getMaximum(const int arr[], int n);


int main() {
    int n, m, c;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = 0;
        for (int j = 0; j < m; ++j) {
            cin >> c;
            if (c > 0) ++arr[i];
        }
    }

    int result = getMaximum(arr, n);
    if (result == -1) cout << "Numbers are equal";
    else cout << ++result;

    return 0;
}

int getMaximum(const int arr[], int n) {
    bool allEquals = true;
    int sample = arr[0];
    int max = arr[0];
    int maxIndex = 0;

    for (int i = 0; i < n; ++i) {
        allEquals = allEquals && sample == arr[i];
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    if (allEquals) return -1;
    return maxIndex;
}