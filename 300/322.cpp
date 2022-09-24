#include <iostream>
using namespace std;

double calculate() {
    double result = 0;

    for (int i = 103; i > 0; i-=2) {
        result = 1 / (result + i);
    }

    return result;
}


int main() {
    int a;
    cin >> a;
    cout << calculate();

    return 0;
}
