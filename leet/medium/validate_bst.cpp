#include <algorithm>
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
        bool isValidBST(TreeNode* root) {
            vector<int> result;
            inorder(root, result);
            vector<int> after_sorting = result;
            sort(after_sorting.begin(), after_sorting.end());
            auto it = unique(after_sorting.begin() , after_sorting.end());
            after_sorting.erase(it, after_sorting.end());
            return result == after_sorting;
        }
    private:
        void inorder(TreeNode* root, std::vector<int>& result){
            if(root){
                inorder(root->left, result);
                result.push_back(root->val);
                inorder(root->right, result);
            }
        }
};
