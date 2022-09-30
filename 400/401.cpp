#include <iostream>
using namespace std;

int main() {
    int i, x;
    int array[100];

    for (i = 0; i < 100; ++i) {
        cin >> x;
        if (x == -1) {
            break;
        }
        array[i] = x;
    }
    cout << i << endl;
    for (int j = 0; j < i; ++j) {
        cout << array[j] << ' ';
    }

    return 0;
}
