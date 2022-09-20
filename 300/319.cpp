#include <iostream>
#include <cmath>
using namespace std;

double factorial(double n) {
    double f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}

double calculate(double a) {
    double result = a;
    int modifier = -1;

    for (int i = 3; i <= 13; i += 2) {
        result += modifier * (pow(a, i) / factorial(i)); // was bug: double / int = int
        modifier *= -1;
    }

    return result;
}


int main() {
    double a;
    cin >> a;
    cout << calculate(a);

    return 0;
}
