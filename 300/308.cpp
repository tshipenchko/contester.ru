#include <iostream>
using namespace std;

int main() {
    int y = 2010;
    int d = 3;
    int n;
    cin >> n;
    int diff = y - n;
    int sign = (0 < diff) - (diff < 0);  // 1 or -1
    int mod = (n%4 == 0) + 1;
    cout << ( (n == y) ? d : d + sign * mod );
}
