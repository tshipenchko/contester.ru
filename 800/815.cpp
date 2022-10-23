#include<iostream>
using namespace std;


int main() {
    int f, s, sum;
    cin >> f >> s;
    for(int i = f; i <= s; ++i) {
        if(i/10000000 + i/1000000%10 + i/100000%10 + i/10000%10 == i/1000%10 + i/100%10 + i/10%10 + i%10) sum ++;
    }
    cout << sum;

    return 0;
}
