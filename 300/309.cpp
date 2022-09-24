#include <iostream>
using namespace std;

int isLeap(int y) {
    return y % 400 == 0 || y % 4 == 0 && y % 100 != 0;
}

int getDays(int m, int y) {
    // return amount of days in 'm' th m
    if (m == 2) {
        return isLeap(y) ? 29 : 28;
    }

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    } else {
        return 30;
    }
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    d++;
    if (d > getDays(m, y)) {
        d = 1;
        m++;
    }
    if (m > 12) {
        m = 1;
        y++;
    }

    cout << d << ' ' << m << ' ' << y;
}
