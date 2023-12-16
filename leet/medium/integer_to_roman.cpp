#include <iostream>
#include <ostream>
#include <string>
#include <sstream>

std::string intToRoman(int);
std::string roman(int);

int main () {
    int number;
    std::cout << "give me a number\n";
    std::cin >> number;
    std::string ans = intToRoman(number);
    std::cout << ans <<std::endl;

}

std::string intToRoman( int  num ) {
    std::stringstream ss("");
    while ( true ) {
        if ( num >= 1000 ) {
            num = num - 1000;
            ss << "M";
        } else if ( num >= 900 ) {
            num = num - 900;
            ss << "CM";
        } else if ( num >= 500 ) {
            num = num - 500;
            ss << "D";
        } else if ( num >= 400 ) {
            num = num - 400;
            ss << "CD";
        } else if ( num >= 100 ) {
            num = num - 100;
            ss << "C";
        } else if ( num >= 90 ) {
            num = num - 90;
            ss << "XC";
        } else if ( num >= 50 ) {
            num = num - 50;
            ss << "L";
        } else if ( num >= 40 ) {
            num = num - 40;
            ss << "XL";
        } else if ( num >= 10 ) {
            num = num - 10;
            ss << "X";
        } else if ( num >= 9 ) {
            num = num - 9;
            ss << "IX";
        } else if ( num >= 5 ) {
            num = num - 5;
            ss << "V";
        } else if ( num >= 4 ) {
            num = num - 4;
            ss << "IV";
        } else if ( num >= 1 ) {
            num = num - 1;
            ss << "I";
        } else {
            return ss.str();
        }
    }
}
