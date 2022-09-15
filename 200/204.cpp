#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;

    int result = x * x + y - z/2;
    std::cout << result;

    return 0;
}