#include <iostream>
using namespace std;

double calculate(double a, double n) {
    return a * (a + 1); // FIXME
}


int main() {
    double a, n;
    cin >> a >> n;
    cout << calculate(a, n);
}
