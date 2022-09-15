#include <iostream>
using namespace std;

double calculate(double n) {
    if (n == 0) {
        return 0;
    }

    double r = 1;

    for (int i = 1; i <= n; i++) {
        r *= 1.0 + 1.0/i/i;
    }

    return r;
}


int main() {
    double n;
    cin >> n;
    cout << calculate(n);
}
