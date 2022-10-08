#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];

    int c = 1;
    for (int i = n-1; i > -1; --i) {
        for (int j = n-1; j > -1; --j) {
            arr[j][i] = c;
            c++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << ' ';
        } cout << endl;
    }
}