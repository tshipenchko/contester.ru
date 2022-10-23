#include <iostream>
using namespace std;

int sumInFrontOfMax(int*, int);


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << sumInFrontOfMax(arr, n);

    return 0;
}

int sumInFrontOfMax(int* arr, int n) {
    int *ptr = arr, *end_ptr = arr+n, *max_ptr = arr;
    int sum = 0, maximum = *ptr;
    while (ptr != end_ptr) {
        if (maximum <= *ptr) {
            maximum = *ptr;
            max_ptr = ptr;
        }
        ++ptr;
    }

    ptr = arr;
    while (ptr != max_ptr) {
        if (*ptr > 0) sum += *ptr;
        ++ptr;
    }

    return sum;
}
