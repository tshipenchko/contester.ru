#include <iostream>
using namespace std;

double calculate(double x) {
    // FIXME
    double result = 0;

    for (int i = 256; i > 1; i/=2) {
        result = i/2./(x*x + i/(x*x));
    }
    result *= 2;

    return result;
}


int main() {
    double x;
    cin >> x;
    cout << calculate(x);

    return 0;
}
