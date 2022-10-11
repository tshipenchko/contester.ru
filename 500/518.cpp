#include <iostream>
using namespace std;

int main() {
    int n, t, neighboursCount;
    cin >> n >> t;
    bool current_generation[n][n];
    bool next_generation[n][n];

    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> current_generation[i][j];
        }
    }

    for (int k = 0; k < t; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                neighboursCount = 0;
                for (int is = -1; is <= 1; ++is) {
                    for (int js = -1; js <= 1; ++js) {
                        if (-1 < (i + is) && (i + is) < n &&
                            -1 < (j + js) && (j + js) < n &&
                            current_generation[i+is][j+js] ) ++neighboursCount;
                    }
                } neighboursCount -= current_generation[i][j]; // is 0 js 0 is itself

                if (current_generation[i][j]) {
                    next_generation[i][j] = neighboursCount == 3 || neighboursCount == 2;
                } else {
                    next_generation[i][j] = neighboursCount == 3;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                current_generation[i][j] = next_generation[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << current_generation[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}
