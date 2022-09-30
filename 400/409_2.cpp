// second way to solve
#include <iostream>
using namespace std;

void bubbleSort(int arr[][3], int n) {
    int j1;
    for (int i = 0, k = n-1; i < k; ++i) {
        for (int j = 0, m = n-i-1; j < m; ++j) {
            j1 = j + 1;
            if (arr[j][0] > arr[j1][0] || // hours >
                arr[j][0] == arr[j1][0] && (arr[j][1] > arr[j1][1] || // hours = & minutes >
                arr[j][0] == arr[j1][0] && arr[j][1] == arr[j1][1] && (arr[j][2] > arr[j1][2])) // hours = & minutes = & seconds >
            ) swap(arr[j], arr[j + 1]);
        }
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n][3];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}
