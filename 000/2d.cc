#include <iostream>
using namespace std;


// source https://stackoverflow.com/a/39278217/19272001
void printArr(int *ptr, int n, int m) {
	int (*arr)[m] = (int(*)[m]) ptr;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {
	int n = 3, m = 2;
	int arr[n][m] = {
		{0, 1},
		{2, 3},
		{4, 5}
	};

	printArr((int *)arr, n, m);

	return 0;
}
