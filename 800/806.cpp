#include <iostream>
using namespace std;

void convert(int*, int*, int);


int main() {
    int n;
    cin >> n;
    int arr[n], mod[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];
    convert(arr, mod, n);
    for (int i = 0; i < n; ++i) cout << mod[i] << ' ';

    return 0;
}

void convert(int* arr, int* mod, int n) {
    int* ptr = arr;
    int* ptr2 = mod;

    for (int i = 0; i < n/2 + n%2; ++i) {
        *(ptr2++) = *(ptr + i*2);
    }
    ptr = arr + 1;
    for (int i = 0; i < n/2; ++i) *(ptr2++) = *(ptr + i*2);
}
