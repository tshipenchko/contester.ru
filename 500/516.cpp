#include <iostream>
using namespace std;

int main() {
    int n, m;
    int c = 0;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0) arr[i][j] = c;
            else arr[i][m-j-1] = c;
            c++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}
