#include <bits/stdc++.h>
using namespace std;



class Solution {
    public:
        int search(vector<int>& nums, int target) {
            return 0;
        }

    public:
        int binary_search(vector<int>& nums, int left, int right, int key){
            int cur = left+right/2;
            if(nums[cur+1] > nums[cur] && nums[cur-1] < nums[cur] && nums[cur] < key ){
                binary_search(nums, cur, nums.size(), key);
            }
            if(nums[cur+1] > nums[cur] && nums[cur-1] < nums[cur] && nums[cur] > key ){
                binary_search(nums, 0, cur, key);
            }
        }
};
