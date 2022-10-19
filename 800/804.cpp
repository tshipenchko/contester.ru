#include <iostream>
#include <cctype>
#define MAX_L 100
using namespace std;

void onlyAlpha(char*, char*);


int main() {
    char str[MAX_L];
    char new_str[MAX_L];
    cin >> str;
    onlyAlpha(str, new_str);
    cout << new_str;

    return 0;
}

void onlyAlpha(char* p, char* new_p) {
    for (int i = 0; i < MAX_L && *p != '\0'; ++i) {
        if (isalpha(*p)) {
            *new_p++ = *p;
        };
        p++;
    }
    *new_p = '\0';
}
