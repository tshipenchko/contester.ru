#include <iostream>
using namespace std;

double power(double a, int n);


int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}

double power(double a, int n) {
    double r = 1;

    for (int i = 0; i < n; ++i) {
        r *= a;
    }

    return r;
}
