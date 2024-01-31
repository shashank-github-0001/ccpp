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
        bool isSameTree(TreeNode* p, TreeNode* q) {
            if (!p && !q) return true;  // Both trees are empty
            if (!p || !q) return false;  // One tree is empty, not the other
            if (p->val != q->val) return false;  // Nodes have different values
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
};
