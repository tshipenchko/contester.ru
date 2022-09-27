#include <iostream>
using namespace std;

int main() {
    char s;
    int n;
    int c = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == 'A') c++;
    }
    cout << c;

    return 0;
}
