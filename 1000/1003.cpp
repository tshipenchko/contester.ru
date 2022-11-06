#include <iostream>
#define N 100
using namespace std;

struct Student {
    int id;
    char *surname;
    double grade;
};


int main() {
    int n;
    cin >> n;
    Student students[n];

    int index = 0;
    for (int i = 0; i < n; ++i) {
        students[i].surname = new char[N];
        cin >> students[i].id >> students[i].surname >> students[i].grade;

        if (students[i].grade > students[index].grade) {
            index = i;
        }
    }

    cout << students[index].id << ' ' << students[index].surname << ' ' << students[index].grade;

    return 0;
}
