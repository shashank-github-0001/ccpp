#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            int copy_x = x;
            int max = 2147483647;
            int min = -2147483648;
            int reversed_num = 0;
            std::vector<int> ints;
            while (x>0) {
                ints.push_back(x%10);
                x /= 10;
            }
            for (const auto i : ints) {
                cout << i << endl;
            }
            for(int i=0; i<ints.size()-1; i++) {
                reversed_num = reversed_num * 10 + ints[0];
                ints.erase(ints.begin());
            }
            if(x < 0) {
                if((reversed_num*10 + ints[0])*(-1) < min) return 0;
                else return (reversed_num*10 + ints[0])*(-1);
            }
            if(x > 0) {
                if((reversed_num*10 + ints[0]) > max) return 0;
                else return (reversed_num*10 + ints[0]);
            }
            return 0;
        }
};

int main() {
    int num;
    cin >> num;
    Solution* sol = new Solution();
    int ans = sol->reverse(num);
    cout << ans << endl;
}

