#include <iostream>
#include <tuple>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);
    test.push_back(6);
    test.push_back(7);
    for( auto it = test.begin(); it != test.end(); it++){
        std::cout << *it << std::endl;
    }
}



