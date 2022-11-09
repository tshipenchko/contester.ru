#include <iostream>
#include <algorithm>
#define N 1000
using namespace std;

struct Student {
    int id;
    char name[N];
    char surname[N];
    int subject1;
    int subject2;
    int subject3;
    int subjectSelected;
    bool specialCase;
};

int total(Student x) {
    return x.subject1 + x.subject2 + x.subject3 + x.subjectSelected;
}

int total(Student *x) {
    return x->subject1 + x->subject2 + x->subject3 + x->subjectSelected;
}

bool compare(Student a, Student b) {
    if (a.specialCase) return false;
    int total_a = total(a);
    int total_b = total(b);

    if (total_a != total_b) return total_a > total_b;
    return a.subjectSelected > b.subjectSelected;
}

bool comparePtr(Student *a, Student *b) {
    if (a->specialCase) return false;
    int total_a = total(a);
    int total_b = total(b);

    if (total_a != total_b) return total_a > total_b;
    return a->subjectSelected > b->subjectSelected;
}

int main() {
    int n, m;
    cin >> n >> m;
    Student students[n];
    Student *grantedStudents[m];
    char specialCase[N];

    for (int i = 0; i < n; ++i) {
        cin >> students[i].id
            >> students[i].name
            >> students[i].surname
            >> students[i].subject1
            >> students[i].subject2
            >> students[i].subject3
            >> students[i].subjectSelected
            >> specialCase;
        students[i].specialCase = specialCase[0] == 'Y';  // Yes, not a full check
    }

    sort(students, students + n, compare);

    int j = 0;
    for (int i = 0; i < n && j < m; ++i) {
        if (students[i].specialCase) {
            grantedStudents[j] = students + i;
            j++;
        }
    }
    for (int i = 0, l = m - j; i < l; ++i) {
        grantedStudents[j] = students + i;
        j++;
    }

    sort(grantedStudents, grantedStudents + m, comparePtr);

    for (int i = 0; i < j; ++i) {
        cout << grantedStudents[i]->id << ' '
             << grantedStudents[i]->name << ' '
             << grantedStudents[i]->surname << ' '
             << total(grantedStudents[i]) << endl;
    }

    return 0;  // FIXME ???
}
