#include <iostream>
#include <cmath>
using namespace std;

double calculate(double a) {
    double result = a;
    double f = 1;
    int modifier = -1;

    for (int i = 3; i <= 13; i += 2) {
        f *= i*(i-1);
        result += modifier * (pow(a, i) / f);
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
