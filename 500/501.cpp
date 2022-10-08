#include <iostream>
using namespace std;

int main() {
    int n, m;
    int current, minimum;

    cin >> n >> m;
    cin >> minimum;
    for (int i = 1, k = n*m; i < k; ++i) {
        cin >> current;
        if (current < minimum) {
            minimum = current;
        }
    }
    cout << minimum;

    return 0;
}
