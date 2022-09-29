#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k;
    n = min(k, 31);

    for (int i = 2; i <= n; ++i) {  // 31*31 > 1000
        if (i!=k && k % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
