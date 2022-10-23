#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str;
    int k;
    cin >> str >> k;

    for (int i = 0, l = (int) str.length(); i < l; ++i) { // NOLINT(modernize-loop-convert)
        str[i] = char(int(str[i] - k + 'A')%26 + 'A');
    }
    cout << str;

    return 0;
}
