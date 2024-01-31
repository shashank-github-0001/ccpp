#include <type_traits>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> result;
            helperFunction(root, result);
            return result;

        }
        void helperFunction(TreeNode* root, vector<int>& result){
            if(root!=nullptr){
                helperFunction(root->right, result);
                result.push_back(root->val);
                helperFunction(root->left, result);
            }
        }
};
