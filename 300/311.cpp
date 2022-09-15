#include <iostream>
using namespace std;

int factorial(int x) {
    int r = 1;

    for (int i = 1; i <= x; i++) {
        r *= i;
    }

    return r;
}


int main() {
    int x;
    cin >> x;
    cout << factorial(x);
}
