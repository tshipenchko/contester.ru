#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    cout << (y % 400 == 0 || y % 4 == 0 && y % 100 != 0 ? 366 : 365);

    return 0;
}