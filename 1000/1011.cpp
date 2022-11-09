#include <iostream>
#include <cstring>
#define N 1000
using namespace std;

int main() {
    char str[N];
    cin.getline(str, N);
    int count = 0;

    for (size_t i = 0, l = strlen(str); i < l; ++i) {
        if (str[i] == '(') count++;
        else {
            if (count <= 0) {
                cout << "INVALID";
                return 0;
            }
            count--;
        }
    }

    cout << (!count ? "VALID" : "INVALID");
    return 0;
}
