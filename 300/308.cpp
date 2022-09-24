#include <iostream>
using namespace std;

int isLeap(int y) {
    return y % 400 == 0 || y % 4 == 0 && y % 100 != 0;
}

int getLeapYearsCount(int start, int end) {
    // y % 400 == 0 || y % 4 == 0 && y % 100 != 0
    // end and start are included
    int interval = end - start + 1;
    return interval / 400 + interval / 4 - (interval / 100) * 2 + isLeap(start);
}

int calculate(int y) {
	// FIXME
    int leapYears = getLeapYearsCount(1, y);
    // 7 is first monday of first year
    int result = (7 + y + leapYears) % 7;
    return result == 0 ? 7 : result;
}


int main() {
    int y;

    while (true) {
        cin >> y;
        cout << calculate(y) << endl;
    }
    return 0;
}
