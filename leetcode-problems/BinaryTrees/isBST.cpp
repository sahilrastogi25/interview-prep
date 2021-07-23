class Solution {
public:
    bool isBST(TreeNode* root, long min, long max) {
        if (root == NULL) {
            return true;
        }
        if (root->val <= min or root->val >= max) {
            return false;
        }
        return (
                   isBST(root->left, min, root->val) and
                   isBST(root->right, root->val, max)
               );
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root, LONG_MIN, LONG_MAX);
    }
};