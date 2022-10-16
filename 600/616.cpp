#include <iostream>
using namespace std;

int binary2decimal(const char arr[], int n);


int main() {
    int n;
    cin >> n;
    char arr[n];
    cin >> arr;
    cout << binary2decimal(arr, n);

    return 0;
}

int binary2decimal(const char arr[], int n) {
    int result = 0;
    int base = 1;

    for (int i = n - 1; i > -1; --i) {
        if (arr[i] == '1') result += base;
        base *= 2;
    };

    return result;
}
