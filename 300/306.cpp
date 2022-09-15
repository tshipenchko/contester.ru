#include <iostream>

int main() {
    int y;
    std::cin >> y;
    std::cout << (y % 400 == 0 || y % 4 == 0 && y % 100 != 0 ? 366 : 365);

    return 0;
}