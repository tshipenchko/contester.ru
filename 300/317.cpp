#include <iostream>
using namespace std;

double calculate(double a, double n) {
    double result = 0;
    double divider = 1;

    for (int i = 0; i <= n; ++i) {
        divider *= (a + i);
        result += 1/divider;
    }

    return result;
}


int main() {
    double a, n;
    cin >> a >> n;
    cout << calculate(a, n);

    return 0;
}
