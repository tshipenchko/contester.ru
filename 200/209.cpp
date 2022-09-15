#include <iostream>
using namespace std;

void print_result(double x, double k, double c) {
    cout << "x = " << x << " : y = " << k*x + c << endl;
}

int main() {
    double k, c;
    cin >> k >> c;
    print_result(0.1, k, c);
    print_result(1, k, c);
    print_result(5, k, c);

    return 0;
}
