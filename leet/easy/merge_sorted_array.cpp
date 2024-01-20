#include <iostream>
#include <vector>
#include <algorithm>


void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

int main () {
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int n = 3;
    merge(nums1, 3, nums2, 3);
    for( const auto& i : nums1 ) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    nums1.erase(nums1.end()-n, nums1.end());
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    std::sort(nums1.begin(), nums1.end());
}
