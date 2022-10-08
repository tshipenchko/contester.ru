#include <iostream>
using namespace std;

int main() {
    int n, c;
    int s = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c < 0) s+=c;
    }
    cout << s;

    return 0;
}
