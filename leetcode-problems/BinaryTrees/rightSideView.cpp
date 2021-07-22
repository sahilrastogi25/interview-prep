class Solution {
public:
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
        if (root == NULL) {
            return result;
        }
        q.push(root);
        q.push(NULL);
        vector<int>vec;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp == NULL) {
                result.push_back(vec);
                vec.clear();
                if (!q.empty()) {
                    q.push(NULL);
                }
            }
            else {
                vec.push_back(temp->val);
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return result;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans = treeTraversal(root);
        vector<int>result;
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[i].size(); j++) {
                if (j == ans[i].size() - 1) {
                    result.push_back(ans[i][j]);
                }
            }
        }
        return result;
    }
};