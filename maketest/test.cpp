#include <iostream>
#include <tuple>


int main () {
    std::tuple<int, float, std::string> some_shit(1, 2.0, "damn");
    auto [number, floating_shit, string_shit] = some_shit;
    std::cout << number << std::endl;
    std::cout << floating_shit << std::endl;
    std::cout << string_shit << std::endl;
}



