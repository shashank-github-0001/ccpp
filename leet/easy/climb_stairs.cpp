#include <iostream>
#include <array>



int climbStairs(int);

int main() {
    int n;
    std::cout << "give the value of n" << std::endl;
    std::cin >> n;
    std::cout << climbStairs(n) << std::endl;
}


int climbStairs(int n) {
    std::array<int, 50> table;
    table[0] = 1;
    table[1] = 1;
    for (int i = 2; i <= n; i++){
        table[i] = table[i-1] + table[i-2];
    }
    return table[n];
}
