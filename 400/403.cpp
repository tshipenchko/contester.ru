#include <iostream>
using namespace std;

int main() {
    int n;
    int current, minimum;

    cin >> n;
    cin >> minimum;
    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current < minimum) {
            minimum = current;
        }
    }
    cout << minimum;

    return 0;
}
