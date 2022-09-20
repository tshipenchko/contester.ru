#include <iostream>
#include <cmath>
using namespace std;

double calculate(double x, double a, double n) {
    double result = pow(x + a, 2);

    for (int i = 1; i < n; ++i) {
        result = pow(result + a, 2);
    }

    result += a;
    return result;
}


int main() {
    double x, a, n;
    cin >> x >> a >> n;
    cout << calculate(x, a, n);

    return 0;
}
