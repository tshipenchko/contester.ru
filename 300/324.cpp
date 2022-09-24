#include <iostream>
using namespace std;

double calculate() {
    double result = 0;

    for (int i = 1; i <= 50; ++i) {
        result += 1./(i*i*i);
    }
    
    return result;
}


int main() {
    cout << calculate();
    return 0;
}
