#include <iostream>
using namespace std;

bool isExist(int, int, int, int);


int main() {
    int n;
    cin >> n;
    int m = n;

    bool arr[n][m];

    bool* ptr = &arr[0][0];
    while (ptr <= &arr[n-1][m-1]) *ptr++ = false;

    int h = 1; int x = -1;
    int v = 0; int y = 0;
    for (int i = 0, l = n*m; i < l; i++) {
        bool canPlace = (
                (isExist(x+h, y+v, m, n) && !arr[y+v][x+h]) &&
                (!isExist(x+h*2, y+v*2, m, n) || !arr[y+v*2][x+h*2])
        );
        if (canPlace) {
            x += h;
            y += v;
            arr[y][x] = true;
        } else {
            if (h == 1) {
                h = 0;
                v = 1;
            } else if (v == 1) {
                v = 0;
                h = -1;
            } else if (h == -1) {
                h = 0;
                v = -1;
            } else if (v == -1) {
                v = 0;
                h = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        } cout << endl;
    }

    return 0;
}

bool isExist(int x, int y, int m, int n) {
    return x > -1 && x < m && y > -1 && y < n;
}
