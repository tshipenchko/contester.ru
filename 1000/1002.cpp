#include <iostream>
#include <cstring>
#define N 100
using namespace std;

struct Train {
    int id;
    char *location;
    char *time;
};

void strupper(char *);


int main() {
    int n;
    cin >> n;
    Train trains[n];
    for (int i = 0; i < n; ++i) {
        trains[i].location = new char[N];
        trains[i].time = new char[N];
        cin >> trains[i].id >> trains[i].location >> trains[i].time;
        strupper(trains[i].location);
    }

    char location[N];
    cin >> location;
    strupper(location);

    int index = -1;
    char min_time[N];
    for (int i = 0; i < n; ++i) {
        if (strcmp(trains[i].location, location) == 0 && index == -1 || strcmp(trains[i].time, min_time) < 0) {
            strcpy(min_time, trains[i].time);
            index = i;
        } else {
            delete[] trains[i].location;
            delete[] trains[i].time;
        }
    }

    if (index == -1) {
        cout << "Impossible";
    } else {
        cout << trains[index].id << '_' << trains[index].location << '_' << trains[index].time;
        delete[] trains[index].location;
        delete[] trains[index].time;
    }

    return 0;
}

void strupper(char *s) {
    for (size_t i = 0, l = strlen(s); i < l; ++i) {
        s[i] = (char) toupper(s[i]);
    }
}
