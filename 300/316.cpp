#include <iostream>
using namespace std;

double calculate(double a, double n) {
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= (a + i - 1);
    }

    return result;
}


int main() {
    double a, n;
    cin >> a >> n;
    cout << calculate(a, n);

    return 0;
}
