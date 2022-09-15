#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
// using namespace std;

int main() {
	float x, y;

	cin >> x >> y;

	if (y == 0) {
		cerr << "cannot divide to zero" << endl;
		return 1;
	}

	cout << x/y << endl;
	return 0;
}
