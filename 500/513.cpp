#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[][10] = {
            "Tom", "555-3322",
            "Mary", "555-8976",
            "Jon", "555-1037",
            "Rachel", "555-1400",
            "Sherry", "555-8873"
    };
    char input[6];
    cin >> input;

    for (int i = 0; i <= 8; i+=2) {
        if (strcmp(input, arr[i]) == 0) {
            cout << arr[i+1];
            return 0;
        }
    }
    cout << "Not found";

    return 0;
}