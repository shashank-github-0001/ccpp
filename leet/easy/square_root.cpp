#include <iostream>
#include <cmath>


int mySqrt(int);

int main(){
    int x;
    std::cin >> x;
    std::cout << mySqrt(x) << std::endl;
}

int mySqrt(int x) {
    double sq_root = std::sqrt(x);
    return int(sq_root);
}
