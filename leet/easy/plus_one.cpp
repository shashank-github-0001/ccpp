#include <vector>
#include <iostream>

std::vector<int> plusOne(std::vector<int>& digits);

int main () {
    std::vector<int> a = {9, 9, 9, 9};
    std::vector<int> b = plusOne(a);
    for (auto i = b.begin(); i != b.end(); ++i){
        std::cout << *i << std::endl;
    }
}

std::vector<int> plusOne(std::vector<int>& digits) {
    auto i = --digits.end(); //starts at the last digit
    while ( *i == 9 && i != digits.begin() ) {
        *i = 0;                     // make zero until you have 9 
        i--;
    } if ( i == digits.begin() && *i == 9 ) {
        *i = 0;                     // this makes the 9999 to 10000
        digits.insert(digits.begin(), 1);
    } else {
        *i += 1;                    // if its 1999 it makes it 2999
    }
    return digits;
}
