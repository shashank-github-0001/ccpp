#include <iostream>
#include <algorithm>
#include <regex>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            vector<char> words; 
            stringstream ss;
            for (int i=0; i<s.length(); i++) {
                if(!(find(words.begin(), words.end(), s[i]) != words.end())){
                    words.push_back(s[i]);
                }
            }
        }
};

int main() {}

