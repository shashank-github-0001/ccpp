#include <iostream>
#include <tuple>
#include <ranges>

int main() {
    for( const auto value : std::views::iota(1, 100)){
        std::cout << value << "\n";
    }
}



