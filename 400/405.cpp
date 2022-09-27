#include <iostream>
using namespace std;

int main() {
    int n, maximum, cur;
    int count = 1;
    cin >> n >> maximum;
    for (int i = 1; i < n; ++i) {
        cin >> cur;
        if (cur == maximum) {
            count++;
        } else if (cur > maximum) {
            count = 1;
            maximum = cur;
        }
    }
    cout << count;

    return 0;
}
