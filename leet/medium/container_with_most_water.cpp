#include <chrono>
#include <ios>
#include <vector>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int area = 0;
            int left = 0;
            int right = height.size()-1;
            int width = 0;
            int length = 0;
            while(left < right){
                width = right - left;
                length = min(height[left], height[right]);
                area = max(area, width*length);
                if(height[left] < height[right]) left++;
                else right--;
            }
            return area;
        }
};
