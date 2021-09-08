class Solution {
    bool findPath(vector<TreeNode*>&v, TreeNode* root, TreeNode* k) {
        if (root == NULL) return false;
        if (root->val == k->val) {
            v.push_back(root);
            return true;
        }
        bool findLpath = findPath(v, root->left, k);
        if (findLpath) {
            v.push_back(root);
            return true;
        }
        bool findRpath = findPath(v, root->right, k);
        if (findRpath) {
            v.push_back(root);
            return true;
        }
        return false;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>v1, v2;
        findPath(v1, root, p);
        findPath(v2, root, q);
        int i = v1.size() - 1;
        int j = v2.size() - 1;
        while (i >= 0 and j >= 0 and v1[i]->val == v2[j]->val) {
            i--;
            j--;
        }
        i++;
        j++;
        return v1[i];
    }
};