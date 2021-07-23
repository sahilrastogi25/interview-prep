class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return root;
        }
        if (root->val == p->val || root->val == q->val) {
            return root;
        }
        else if (root->val > p->val and root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if (root->val < p->val and root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};