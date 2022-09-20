#include <iostream>
using namespace std;

double calculate(double a, double n) {
    double result = 0;
    for (int i = 0; i <= n; ++i) {
        double divider = a;
        for (int j = 0; j < i; ++j) {
            divider *= (a + j + 1);
        }
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
