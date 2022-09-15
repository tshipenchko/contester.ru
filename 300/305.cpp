#include <iostream>
using namespace std;

int main() {
    float x, y, z;
    cin >> x >> y >> z;

    if (x+y > z && x+z > y && y+z > x) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
