#include <iostream>
#include <cstring>
#define N 1001
using namespace std;

void addVeryLongIntegers(char *,char *,char *);
void strrev(char *str);

int main() {
    char a[N], b[N], c[N];
    cin >> a >> b;
    addVeryLongIntegers(a, b, c);
    cout << c;

    return 0;
}


void addVeryLongIntegers(char *a,char *b,char *c) {
    c[0] = '\0';
    size_t aLen = strlen(a);
    size_t bLen = strlen(b);
    if (aLen > bLen) {
        swap(a, b);
        swap(aLen, bLen);
    }
    strrev(a);
    strrev(b);

    int rem = 0, sum;
    char ch;
    for (size_t i = 0; i < aLen; ++i) {
        sum = (a[i] - '0') + (b[i] - '0') + rem;
        ch = (char)(sum%10 + '0');
        strncat(c, &ch, 1);
        rem = sum / 10;
    }

    for (size_t i = aLen; i < bLen; ++i) {
        sum = (b[i] - '0') + rem;
        ch = (char)(sum%10 + '0');
        strncat(c, &ch, 1);
        rem = sum / 10;
    }

    if (rem) {
        ch = (char)(rem + '0');
        strncat(c, &ch, 1);
    }

    strrev(c);
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
void strrev(char *str) {  // strrev is not available on Linux...
    char *p1, *p2;

    if (! str || ! *str)
        return;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
}
#pragma clang diagnostic pop
