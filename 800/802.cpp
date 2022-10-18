#include <iostream>
using namespace std;

void readArray(int*, int);


int main() {
    int n;
    cin >> n;
    int arr[n];
    readArray(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << ' ';
    }
}

void readArray(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> *arr++;
    }
}
