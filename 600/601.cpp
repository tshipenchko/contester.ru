#include <iostream>
using namespace std;

int min(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);

    return 0;
}

int min(int a, int b, int c, int d) {
    int t = a;
    if (t > b) t = b;
    if (t > c) t = c;
    if (t > d) t = d;

    return t;
}
