#include <iostream>
using namespace std;

int main() {
    float x, y, z;

    if (x <= y && y <= z) {
        cout << x;
    } else if (y <= x && y <= z) {
        cout << y;
    } else if (z <= x && z <= y) {
        cout << z;
    }

    cout << ' ';

    if (x >= y && y >= z) {
        cout << x;
    } else if (y >= x && y >= z) {
        cout << y;
    } else if (z >= x && z >= y) {
        cout << z;
    }

    return 0;
}