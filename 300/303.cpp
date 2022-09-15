#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c;

    d = pow(b, 2) - 4 * a * c;

    if (d < 0) {
        cout << "no solution" << endl;
    } else if (d == 0) {
        cout << b / 2 / a << endl;
    } else { // d > 0
        cout << (-b + sqrt(d)) / 2 / a << ' ';
        cout << (-b - sqrt(d)) / 2 / a << endl;
    }

    return 0;
}
