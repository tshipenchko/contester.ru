#include <iostream>
#include <cstring>
#define N 1001
#define M 31
using namespace std;

void deleteRepeats(char *out, char *text);


int main() {
    char text[N];
    cin.getline(text, N);

    char out[N];
    deleteRepeats(out, text);
    cout << out;

    return 0;
}

void deleteRepeats(char *out, char *text) {
    char delim[] = " ";
    out[0] = '\0';

    char *tokenPtr = strtok(text, delim);
    while (tokenPtr != NULL) { // NOLINT(modernize-use-nullptr)
        if (strstr(out, tokenPtr) == NULL) { // NOLINT(modernize-use-nullptr)
            strcat(out, tokenPtr);
            strcat(out, " ");
        }
        tokenPtr = strtok(NULL, delim); // NOLINT(modernize-use-nullptr)
    }
}
