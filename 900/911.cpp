#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    int c = 0, mod = n % 2 == 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = ((c++ + mod) % 2 == 0 ? 'X' : '.');
        }
        if (m % 2 == 0) c++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
