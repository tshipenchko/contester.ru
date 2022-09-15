#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if (x <= y && y <= z) {
        x *= 2;
        y *= 2;
        z *= 2;
    } else {
        x = abs(x);
        y = abs(y);
        z = abs(z);
    }

    cout << x << " " << y << " " << z;

    return 0;
}
