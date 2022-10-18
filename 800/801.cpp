#include <iostream>
using namespace std;

void swap2(int*, int*);

int main() {
    int x, y;
    cin >> x >> y;

    swap2(&x, &y);

    cout << x << ' ' << y;
}

void swap2(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
