#include <iostream>
using namespace std;

int fibonaci(int n);

int main() {
    int n;
    cin >> n;
    cout << fibonaci(n);
}

int fibonaci_iter(int counter, int a, int b) { // NOLINT(misc-no-recursion)
    if (counter == 1) return a;
    return fibonaci_iter(counter-1, b, a + b);
}

int fibonaci(int n) {
    if (n == 0) return 0;
    return fibonaci_iter(n, 1, 1);
}
