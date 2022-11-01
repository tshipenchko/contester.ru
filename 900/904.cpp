#include <iostream>
#include <cstring>
#define N 1001
#define M 31
using namespace std;

void mostRecent(char *text, char *word);


int main() {
    char text[N];
    cin.getline(text, N);

    int l = (int)strlen(text);
    for (int i = 0; i < l; ++i) {
        if (!isalpha(text[i])) {
            text[i] = ' ';
        } else {
            text[i] = (char)toupper(text[i]);
        }
    }

    char word[M];
    mostRecent(text, word);
    cout << word;

    return 0;
}

void mostRecent(char *text, char *word) {
    char delim[] = " ";
    char *tokenPtr = strtok(text, delim);

    char *words[N];

    int n;
    for (n = 0; tokenPtr != NULL; ++n) { // NOLINT(modernize-use-nullptr)
        words[n] = tokenPtr;
        tokenPtr = strtok(NULL, delim); // NOLINT(modernize-use-nullptr)
    }

    int maxCount = 0;
    int i, j;
    for (i = 0; i < n; ++i) {
        for(j = 0; j < i; ++j) if (words[j] == words[i]) break;

        if (j < i) continue;

        int count = 1;
        for (j = i + 1; j < n; ++j) if (words[j] == words[i]) count++;

        if (count > maxCount) {
            maxCount = count;
            strcpy(word, words[i]);
        }
    }
}
