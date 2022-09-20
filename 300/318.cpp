#include <iostream>
#include <cmath>
using namespace std;

double calculate(double a, double n) {
    double result = 1/a;

    for (int i = 1; i <= n; ++i) {
        result += 1/(pow(a, i*2));
    }

    return result;
}


int main() {
    double a, n;
    cin >> a >> n;
    cout << calculate(a, n);

    return 0;
}
