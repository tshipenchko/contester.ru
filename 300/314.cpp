#include <iostream>
#include <cmath>
using namespace std;

double calculate(double n) {
    double r = 0;

    for (int i = 0; i < n; i++) {
        r = sqrt(r + 2);
    }

    return r;
}


int main() {
    double n;
    cin >> n;
    cout << calculate(n);
}
