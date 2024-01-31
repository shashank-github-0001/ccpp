#include <algorithm>
#include <vector>
#include <iostream>


int maxProfit(std::vector<int>& prices);

int main () {
    std::vector<int> test_vector = {7,1,5,3,6,4};
    int ans = maxProfit(test_vector);
    std::cout << ans << std::endl;
}



