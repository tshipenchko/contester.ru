#include <iostream>
using namespace std;

char getPositivesCount(int x, int y);


int main() {
    int x, y;
    cin >> x >> y;
    cout << getPositivesCount(x, y);

    return 0;
}

char getPositivesCount(int x, int y) {
    return x > y ? '>' : x < y ? '<' : '=';
}
