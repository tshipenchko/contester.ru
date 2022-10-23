#include <iostream>
using namespace std;

struct dot_is_space : ctype<char> {
    dot_is_space() : ctype<char>(get_table()) {}
    static mask const* get_table()
    {
        static mask rc[table_size];
        rc['.'] = ctype_base::space;
        rc['\n'] = ctype_base::space;
        return &rc[0];
    }
};


int main() {
    cin.imbue(locale(cin.getloc(), new dot_is_space));

    int x;
    for (int i = 0; i < 4; ++i) {
        cin >> x;
        if (x < 0 || x > 255) {
            cout << false;
            return 0;
        }
    }
    cout << true;

    return 0;
}
