#include <iostream>
using namespace std;

int main() {
    int n;
    int f, e;

    cin >> n;
    cin >> f;
    for (int i = 0; i < n-2; ++i) {
        cin >> e;
    }
    cin >> e;
    cout << (f == e ? "YES" : "NO");

    return 0;
}
