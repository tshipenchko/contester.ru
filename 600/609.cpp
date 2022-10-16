#include <iostream>
#include <cstring>
#define N 2
#define MAX_L 200
using namespace std;

int countFrequency(char s[MAX_L], char c);


int main() {
    char letters[N];
    char sentences[N][MAX_L];

    for (int i = 0; i < N; ++i) {
        cin >> letters[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> sentences[i];
    }

    for (int i = 0; i < N; ++i) {
        cout << countFrequency(sentences[i], letters[i]) << ' ' << letters[i] << " characters in " << sentences[i] << endl;
    }

    return 0;
}

int countFrequency(char s[MAX_L], char c) {
    int count = 0;

    for (int i = 0, n = int(strlen(s)); i < n; ++i) {
        if (s[i] == c) ++count;
    }

    return count;
}
