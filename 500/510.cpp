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
    int n, m, k;
    cin >> n >> m;
    k = n*m;
    int arr[k];

    int t;
    int j = 0;
    for (int i = 0; i < k; ++i) {
        cin >> t;
        if (t > 0) {
            arr[j] = t;
            j++;
        }
    }

    bubbleSort(arr, j);

    cout << j << endl;
    for (int i = 0; i < j; ++i) {
        cout << arr[i] << ' ';
    }

    return 0;
}
