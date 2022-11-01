#include <iostream>
#include <cstring>
#define N 1001
using namespace std;

void formattedPrint(const char *, int);


int main() {
    char str[N];
    cin.getline(str, N);
    int l = (int)strlen(str);

    char *answer;
    int answerLen = 0;
    int t = 0;

    for (int i = 0; i < l+1; ++i) {
        if (!isdigit(str[i]) || str[i] == '\0') {
            if (t > answerLen) {
                answer = &str[i] - t;
                answerLen = t;
            }
            t = 0;
        } else {
            t++;
        }
    }

    formattedPrint(answer, answerLen);

    return 0;
}


void formattedPrint(const char *str, const int n) {
    int mod = 3 - n % 3;

    for (int i = 0; i < n; ++i) {
        if (i != 0 && (i + mod) % 3 == 0) {
            cout << ' ';
        }
        cout << str[i];
    }
}
