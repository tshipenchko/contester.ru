#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d;

    cin >> a >> b >> c;

    d = powf(b, 2) - 4 * a * c;

    if (d < 0) {
        cout << "no solution" << endl;
    } else if (d == 0) {
        cout << b / 2 / a << endl;
    } else { // d > 0
        cout << (-b + sqrtf(d)) / 2 / a << ' ';
        cout << (-b - sqrtf(d)) / 2 / a << endl;
    }

    return 0;
}
