#include <iostream>
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            int max = 2147483647;
            int min = -2147483648;
            long copy_x = x > 0 ? x : -(long)x;
            long reverse_x = 0;
            while (copy_x > 0) {
                reverse_x = reverse_x*10 + copy_x%10;
                copy_x/=10;
            }
            if(x < 0){
                if(-reverse_x < min) return 0;
                else return -reverse_x;
            }
            else {
                if(reverse_x > max) return 0;
                else return reverse_x;

            }
        }
};

int main() {
    int n;
    cin >> n;
    Solution* sol = new Solution();
    int ans = sol->reverse(n);
    cout << ans << endl;
}


