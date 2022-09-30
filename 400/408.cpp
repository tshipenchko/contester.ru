#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int j1;
    for (int i = 0, k = n-1; i < k; ++i) {
        for (int j = 0, m = n-i-1; j < m; ++j) {
            j1 = j + 1;
            if (arr[j] > arr[j1]) {
                swap(arr[j], arr[j1]);
            }
        }
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    return 0;
}
