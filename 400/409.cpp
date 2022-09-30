#include <iostream>
using namespace std;

void bubbleSort(int arr[][4], int n) {
    int j1;
    for (int i = 0, k = n-1; i < k; ++i) {
        for (int j = 0, m = n-i-1; j < m; ++j) {
            j1 = j + 1;
            if (arr[j][3] > arr[j1][3]) {
                swap(arr[j], arr[j1]);
            }
        }
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n][4];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
        arr[i][3] = arr[i][0] * 3600 + arr[i][1] * 60 + arr[i][2];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}
