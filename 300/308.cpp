#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 7 - (int(365.25 * n) - 93) % 7;
    return 0;
}
