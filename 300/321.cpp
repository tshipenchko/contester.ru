#include <iostream>
using namespace std;

double calculate(double x) {
    double result = 1;
    
    for (int i = 2; i <= 64; i *= 2) {
        result = result * (x - i) / (x - i + 1);
    }
    
    return result;
}

int main() {
    double x;
    cin >> x;
    cout << calculate(x);
    
    return 0;
}
