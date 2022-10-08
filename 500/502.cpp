#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    s = 0;
    for (int i = 0; i < n; ++i) {
        s += arr[i][i];
    } cout << s << endl;
    s = 0;
    for (int i = 0; i < n; ++i) {
        s += arr[i][n-i-1];
    } cout << s << endl;

    return 0;
}
