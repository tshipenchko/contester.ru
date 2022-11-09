#include <iostream>
#define N 100000
using namespace std;


int main() {
    int n, j = 0;
    char str[N];
    char tmp[N];
    cin >> n >> str;

    bool condition;
    for (int i = 0; i < n; ++i) {
        if (str[i] == '[' || str[i] == '(' || str[i] == '{') tmp[j++] = str[i];
        else {
            condition = (
                    j == 0 || str[i] == ']' &&
                    tmp[j - 1] != '[' || str[i] == ')' &&
                    tmp[j - 1] != '(' || str[i] == '}' &&
                    tmp[j - 1] != '{'
            );
            if (condition) {
                cout << "No";
                return 0;
            }
            --j;
        }
    }

    cout << (!j ? "Yes" : "No");
    return 0;
}
