#include <algorithm>
#include <vector>

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
    void right_order(TreeNode* root, std::vector<int>& result){
        if(root){
            right_order(root->left, result);
            right_order(root->right, result);
            result.push_back(root->val);
        }
    }

    public:
    void left_order(TreeNode* root, std::vector<int>& result){
        if(root){
            result.push_back(root->val);
            right_order(root->left, result);
            right_order(root->right, result);
        }
    }

    public:
    bool isSymmetric(TreeNode* root) {
        std::vector<int> result_right;
        std::vector<int> result_left;
        right_order(root->right, result_right);
        left_order(root->left, result_left);
        std::reverse(result_left.begin(), result_left.end());
        if(result_left==result_right) return true;
        else return false;
    }
};
