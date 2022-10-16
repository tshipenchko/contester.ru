#include <iostream>
using namespace std;

int getSequenceLength(const int arr[], int m);


int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int currentLength;
    int maxLength = getSequenceLength(arr[0], m);
    int index = 0;
    for (int i = 1; i < n; ++i) {
        currentLength = getSequenceLength(arr[i], m);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            index = i;
        }
    }

    if (maxLength == 1) cout << "No series of equal elements";
    else cout << "Longest series is in the string " << index;

    return 0;
}

int getSequenceLength(const int arr[], int m) {
    int maxCount = 0;
    int currentCount = 0;
    int currentValue = arr[0];
    for (int j = 0; j < m; ++j) {
        if (currentValue == arr[j]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) maxCount = currentCount;
            currentValue = arr[j];
        }
    }
    if (currentCount > maxCount) maxCount = currentCount;

    return maxCount;
}
