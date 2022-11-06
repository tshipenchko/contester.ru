#include <iostream>
#define N 100
using namespace std;

struct Student {
    int id;
    double grade;
};

void bubbleSort(Student[], int);


int main() {
    int n;
    cin >> n;
    Student *students = new Student[n]; // NOLINT(modernize-use-auto)

    for (int i = 0; i < n; ++i) {
        cin >> students[i].id >> students[i].grade;
    }

    bubbleSort(students, n);

    for (int i = 0; i < n; ++i) {
        cout << students[i].id << ' ' << students[i].grade << endl;
    }

    delete[] students;
    return 0;
}

void bubbleSort(Student students[], const int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            bool condition = students[j].grade < students[j + 1].grade ||
                    students[j].grade == students[j + 1].grade &&
                    students[j].id > students[j + 1].id;
            if (condition) {
                swap(students[j], students[j + 1]);
            }
        }
}
