#include <iostream>
#define N 8
#define M 4
using namespace std;


int main() {
    char arr[N][N];
    int colors[M];
    fill(colors, colors + M, 0);

    for (int i = 0; i < 8; ++i) { // NOLINT(modernize-loop-convert)
        for (int j = 0; j < 8; ++j) {
            cin >> arr[i][j];
            colors[arr[i][j] - '0']++;
        }
    }

    for (int i = 0; i < M; ++i) { // NOLINT(modernize-loop-convert)
        if (!colors[i]) {
            cout << "BAD INPUT LIST";
            return 0;
        }
    }

    for (int i = 0; i < N; ++i) { // NOLINT(modernize-loop-convert)
        for (int j = 0; j < N; ++j) {
            if (arr[i][j] == '2') cout << '2';
            else cout << '-';
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < M; ++i) { // NOLINT(modernize-loop-convert)
        cout << colors[i] << ' ';
    }

    return 0;
}
