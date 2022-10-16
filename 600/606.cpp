#include <iostream>
using namespace std;

int countPositive(const int arr[], int n);
void writeArray(int arr[], int n);


int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    writeArray(arr1, n);
    writeArray(arr2, n);

    int count1 = countPositive(arr1, n);
    int count2 = countPositive(arr2, n);

    if (count1 > count2) cout << "Number of positives in the first array is greater";
    else if (count2 > count1) cout << " Number of positives in the second array is greater";
    else cout << "Numbers are equal";

    return 0;
}

void writeArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

int countPositive(const int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) ++count;
    }

    return count;
}
