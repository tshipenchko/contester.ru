#include <iostream>
using namespace std;

double calculate(double a, double n) {
    double r = 0;
    for (int i = 0; i < n; i++) {
        r += a;
    }

    return r;
}


int main() {
    double a, n;
    cin >> a >> n;
    cout << calculate(a, n);
}
