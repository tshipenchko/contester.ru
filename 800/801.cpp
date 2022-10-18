#include <iostream>
using namespace std;

void swap2(unsigned int*, unsigned int*);

int main() {
    unsigned int x, y;
    cin >> x >> y;

    swap2(&x, &y);

    cout << x << ' ' << y;
}

void swap2(unsigned int* a, unsigned int* b) {
    unsigned int temp = *b;
    *b = *a;
    *a = temp;
}
