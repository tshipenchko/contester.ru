#include <iostream>
using namespace std;

double calculate(double x) {
    // FIXME
    double result = 1;

    for (int i = 2; i <= 64; i+=2) {
        result *= (x - i);
    }
    for (int i = 1; i <= 63; i+=2) {
        result /= (x - i);
    }
    
    return result;
}


int main() {
    double x;
    cin >> x;
    cout << calculate(x);

    return 0;
}
