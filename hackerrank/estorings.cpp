#include <iostream>
#include <string>


int main() {
    std::string string_one;
    std::string string_two;
    std::getline(std::cin, string_one);
    std::getline(std::cin, string_two);
    std::cout << string_one.length() << " ";
    std::cout << string_two.length() << std::endl;
    std::cout << string_one+string_two << std::endl;
    char temp;
    temp = string_one[0];
    string_one[0] = string_two[0];
    string_two[0] = temp;
    std::cout << string_one << " " << string_two << std::endl;
}

