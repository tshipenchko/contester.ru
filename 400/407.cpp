#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int counts[26] = {0};
    cin >> n;
    char str[n];
    cin >> str;

    for (int i = 0; i < n; ++i) {
        if (++counts[str[i] - 'A'] == 1) count++;
    }

    cout << count << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i]) cout << char(i + 'A') << ' ' << counts[i] << endl;
    }

    return 0;
}
