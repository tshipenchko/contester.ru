#include <iostream>
#include <algorithm>
#include <cstring>
#define N 1000
using namespace std;

struct Train {
    int id;
    char fromAddress[N];
    char toAddress[N];
    char departureTime[N];
};

bool compare(Train a, Train b) {
    return strcmp(b.toAddress, a.toAddress) > 0;
}

void upperCout(char *src) {
    for (size_t i = 0, l = strlen(src); i < l; ++i) {
        cout << (char) toupper(src[i]);
    }
}

int main() {
    int n;
    cin >> n;
    Train trains[n];

    for (int i = 0; i < n; ++i) {
        cin >> trains[i].id >> trains[i].fromAddress >> trains[i].toAddress >> trains[i].departureTime;
    }

    sort(trains, trains + n, compare);

    for (int i = 0; i < n; ++i) {
        cout << trains[i].id << ' ';
        upperCout(trains[i].fromAddress);
        cout << ' ';
        upperCout(trains[i].toAddress);
        cout << ' ';
        cout << trains[i].departureTime;
        cout << endl;
    }

    return 0;  // FIXME incorrect on test 2
}
