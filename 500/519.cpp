#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = false;
        }
    }
    for (int i = 0; i < n; ++i) {
        arr[0][i] = true;
        arr[n-1][i] = true;
        arr[i][n-1] = true;
    }
    int h = n-2, w = n-2;
    int x = n-1, y = 0;
    while (true) {
        for (int i = 0; i < h; ++i) arr[x-i][y] = true;

        x -= --h;
        --h;
        if(h <= 0) break;
        for (int i = 0; i < w; ++i) arr[x][y+i] = true;

        y += --w;
        --w;
        if (w <= 0) break;
        for (int i = 0; i < h; ++i) arr[x+i][y] = true;

        x += --h;
        --h;
        if (h <= 0) break;
        for (int i = 0; i < w; ++i) arr[x][y-i] = true;

        y -= --w;
        --w;
        if(w <= 0) break;
    }
    arr[n/2][n/2] = false;

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        } cout << endl;
    }

    return 0;
}
