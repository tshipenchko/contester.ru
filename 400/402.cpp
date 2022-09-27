#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i;
    double x;
    double array[100];

    for (i = 0; i < 100; ++i) { // NOLINT(modernize-loop-convert)
        cin >> x;
        if (x == 0) {
            break;
        }
        array[i] = x;
    }

    cout << i << endl;
    for (int j = i - 1; j >= 0; --j) {
        cout << sqrt(array[j]) << endl;
    }

    return 0;
}
