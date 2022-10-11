#include <iostream>
#define N 10
using namespace std;

int main() {
    bool arr[N][N];
    for (int i  = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    int ship = 0;
    for (int i = 0; i < N; i++) {
        int line = 0;
        for (int j = 0; j < N; j++) {
            if (!arr[i][j]) line++;
            if (ship < line) ship = line;
            if (arr[i][j]) line = 0;
        }
    }
    for (int j = 0; j < N; j++) {
        int line = 0;
        for (int i = 0; i < N; i++) {
            if (!arr[i][j]) line++;
            if (ship < line) ship = line;
            if (arr[i][j]) line = 0;
        }
    }
    cout << ship;

    return  0;
}
