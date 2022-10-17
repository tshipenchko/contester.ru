#include <iostream>
#include <iomanip>
using namespace std;


struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time difference(Time first, Time second);


int main() {
    Time first = {}, second = {};
    cin >> first.hours >> first.minutes >> first.seconds;
    cin >> second.hours >> second.minutes >> second.seconds;

    Time result = difference(first, second);
    cout << setw(2) << setfill('0') << result.hours << ':';
    cout << setw(2) << setfill('0') << result.minutes << ':';
    cout << setw(2) << setfill('0') << result.seconds;

    return 0;
}

Time difference(Time first, Time second) {
    Time result = {};
    result.hours = second.hours - first.hours;
    result.minutes = second.minutes - first.minutes;
    result.seconds = second.seconds - first.seconds;

    if (result.seconds < 0) {
        result.seconds += 60;
        --result.minutes;
    }
    if (result.minutes < 0) {
        result.minutes += 60;
        --result.hours;
    }

    return result;
}
