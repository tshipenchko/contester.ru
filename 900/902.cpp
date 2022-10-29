#include <iostream>
#include <cstring>
#define N 1000
using namespace std;

void replace(char*, char*);


int main() {
    char *source = new char[N];
    char *dest = new char[N];

    cin.getline(source, N);
    replace(source, dest);
    cout << dest;

    return 0;
}

void replace(char *source, char *dest) {
    for (int i = 0, l = (int)strlen(source); i < l; ++i) {
        *(dest + i) = *(source + i) == '!' ? '.' : *(source + i);
    }
}
