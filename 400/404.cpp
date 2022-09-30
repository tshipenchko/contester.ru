#include <iostream>
using namespace std;

int main() {
    int n;
    int cur, min;
    int minIndex = 0;

    cin >> n;
    cin >> min;
    for (int i = 1; i < n; ++i) {
        cin >> cur;
        if (cur < min) {
            min = cur;
            minIndex = i;
        }
    }
    cout << minIndex;

    return 0;
}
