#include <iostream>
using namespace std;

bool check(char x);
bool solve(const char arr[], int n);


int main() {
    int n;
    cin >> n;
    char str[n];
    cin >> str;

    if (solve(str, n)) cout << "YES";
    else cout << "NO";

    return 0;
}

bool check(char x) {
    return x != '+' && x != '-' && x != '*' && x != '/' && x < '0' || x > '9';
}

bool solve(const char arr[], int n) {
    bool numberRequired = true;
    for (int i = 0; i < n; ++i) {
        if (check(arr[i])) {
            return false;
        }
        if (numberRequired && arr[i] < '0' || arr[i] > '9') {
            return false;
        }
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
            numberRequired = true;
        }
        else {
            numberRequired = false;
        }
    }

    return true;
}
