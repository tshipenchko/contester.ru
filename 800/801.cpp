#include <iostream>
using namespace std;

int main() {
    int x, y, *a, *b, temp;
    cin >> x >> y;

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    cout << x << ' ' << y;
}
