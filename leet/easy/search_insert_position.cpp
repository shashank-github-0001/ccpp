#include <iostream>
#include <algorithm>
#include <vector>

int searchInsert(std::vector<int>&, int);

int main() {
    std::vector<int> nums = {1,3,5,6};
    int target = 5;
    std::cout << searchInsert(nums, target) << std::endl;
}

int searchInsert(std::vector<int>& nums, int target) {
   int middle; 
   int left = 0;
   int right = nums.size() - 1;
   while (left <= right) {
       middle = (left + right) / 2;
       if (nums[middle] == target) {
           return middle;
       } else if (nums[middle] < target) {
           left = middle + 1;
       } else {
           right = middle - 1;
       }
   }
   return left;
}

