#include <iostream>
using namespace std;

int main() {
    int n, m, c;
    int x = -1;
    int y = -1;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c;
            if (c == -1) {
                x = i+1;
                y = j+1;
            }
        }
    }
    cout << x << ' ' << y;

    return 0;
}
