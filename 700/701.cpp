#include <iostream>
using namespace std;

int fibonaci(int n);

int main() {
    int n;
    cin >> n;
    cout << fibonaci(n);
}

int fibonaci(int n) { // NOLINT(misc-no-recursion)
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    return fibonaci(n - 1) + fibonaci(n - 2);
}
