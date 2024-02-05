#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
    public:
        string simplifyPath(string path) {
            vector<string> dirs;
            stringstream ss(path);
            stringstream ans;
            stack<string> fullpath;
            string dir;
            while (getline(ss, dir, '/')) {
                dirs.push_back(dir);
            }
            for (const auto word : dirs) {
                if(word == "") continue;
                if(word == ".") continue;
                if(word == "..") {
                    if(fullpath.empty()) continue;
                    else fullpath.pop();
                }
                else fullpath.push(word);
            }
            dirs.clear();
            if(fullpath.empty()) return "/";
            while (!fullpath.empty()) {
                dirs.push_back(fullpath.top());
                fullpath.pop();
            }
            reverse(dirs.begin(), dirs.end());
            for (const auto word : dirs) {
                ans << "/" << word;
            }
            return ans.str();
        }
};

int main() {
    string question;
    cin >> question;
    Solution *sol = new Solution();
    string answer = sol->simplifyPath(question);
    cout << answer << endl;
}
