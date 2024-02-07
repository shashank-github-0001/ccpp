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
        void flatten(TreeNode* root) {
            if(root == nullptr) return;
            vector<int> result;
            pre_order(root, result);
            TreeNode* start = new TreeNode(result[0]);
            TreeNode* cur = start;
            for(int i=1; i<result.size(); i++){
                cur->right = new TreeNode(result[i]);
                cur = cur->right;
            }
            root = start;
        }
    public:
        void pre_order(TreeNode* root, vector<int>& result){
            if(root){
                result.push_back(root->val);
                pre_order(root->left, result);
                pre_order(root->right, result);
            }
        }
};
