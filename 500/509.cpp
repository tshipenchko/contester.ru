#include <iostream>
using namespace std;

int main() {
    int n, m, s, c = 0, ci;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        s = 0;
        for (int j = 0; j < n; ++j) {
            s += arr[j][i];
        }
        if (s >= c) {
            c = s;
            ci = i;
        }
    }
    cout << ci + 1;

    return 0;
}
