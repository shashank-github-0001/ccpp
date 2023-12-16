#include <iostream>

int factorial(int);

int main() {
    int n;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
