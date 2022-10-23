#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); // NOLINT(modernize-use-nullptr)
    cout.tie(0); // NOLINT(modernize-use-nullptr)

    int x, y;
    string direction;
    int distance;

    while (cin >> direction >> distance) {
        if (direction == "East") x += distance;
        else if (direction == "West") x -= distance;
        else if (direction == "North") y += distance;
        else if (direction == "South") y -= distance;
    }

    cout << x << ' ' << y;
}
