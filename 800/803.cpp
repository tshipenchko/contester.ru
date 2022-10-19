#include <iostream>
#define MAX_L 20
using namespace std;

int countFrequency(char* s, char c);

int main() {
    int n;
    cin >> n;
    char letters[n];
    char sentences[n][MAX_L];

    for (int i = 0; i < n; ++i) {
        cin >> *(letters + i);
        cin >> *(sentences + i);
    }

    for (int i = 0; i < n; ++i) {
        cout << countFrequency(sentences[i], letters[i]) << ' ' << letters[i] << " in " << sentences[i] << endl;
    }

    return 0;
}

int countFrequency(char* s, char c) {
    int count = 0;

    for (int i = 0; i < MAX_L; ++i) {
        if (*(s++) == c) ++count;
        if (*s == '\0') break;
    }

    return count;
}
