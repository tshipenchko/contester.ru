#include <iostream>
#include <cstring>
#define MAX_L 200
using namespace std;

int countFrequency(char s[MAX_L], char c);


int main() {
    int n;
    cin >> n;
    char letters[n];
    char sentences[n][MAX_L];

    for (int i = 0; i < n; ++i) {
        cin >> letters[i];
        cin >> sentences[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << countFrequency(sentences[i], letters[i]) << ' ' << letters[i] << " in " << sentences[i] << endl;
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
