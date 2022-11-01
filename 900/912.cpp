#include <iostream>
#include <iomanip>
#include <cstring>
#define N 1001
using namespace std;

int main() {
    char text[N];
    cin.getline(text, N);
    int l = (int)strlen(text);


    double wordCount = 0, charCount = 0, tmp = 0;
    bool flag = false;

    for (int i = 0; i < l; ++i) {
        if (isalpha(text[i])) {
            tmp++;
            flag = true;
        }
        else {
            charCount += tmp;
            tmp = 0;
            wordCount += flag;
            flag = false;
        }
    }

    cout << setprecision(10) << charCount / wordCount;

    return 0;
}
