#include <iostream>
using namespace std;

double calculate(double x) {
    double result = 0;
    double x2 = x*x;

    for (int i = 256; i > 1; i/=2) {
        result = i/(x2 + result);
    }

    return x/(x2 + result);
}

int main() {
    double x;
    cin >> x;
    cout << calculate(x);

    return 0;
}
