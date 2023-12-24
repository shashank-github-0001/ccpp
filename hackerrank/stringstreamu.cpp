#include <vector>
#include <sstream>
#include <iostream>
#include <string>

int main() {
    std::string line;
    int num;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> vec;
    while ( ss >> num ) {
        vec.push_back(num);
        if(ss.peek() == ' ' || ss.peek() == ',') {
            ss.ignore();
        }
    }
    for (int i : vec) {
        std::cout << i << std::endl;
    }
}


