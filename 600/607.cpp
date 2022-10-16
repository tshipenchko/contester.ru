#include <iostream>
using namespace std;

int getPositivesCount(const int arr[], int n);


int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    bool allEquals = true;
    int current;
    int maxCount = getPositivesCount(arr[0], m);
    int index = 0;
    for (int i = 1; i < n; ++i) {
        current = getPositivesCount(arr[i], m);
        if (current > maxCount) {
            maxCount = current;
            index = i;
            allEquals = false;
        }
    }

    if (allEquals) {
        cout << "Numbers are equal";
    } else {
        cout << index + 1;
    }

    return 0;  // FIXME
}

int getPositivesCount(const int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) ++count;
    }

    return count;
}
