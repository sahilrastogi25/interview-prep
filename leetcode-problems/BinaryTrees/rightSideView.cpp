class Solution {
    void levelOrder(vector<vector<int>>&ans, TreeNode* root) {
        queue<TreeNode*>q;
        if (!root) return;
        q.push(root);
        q.push(NULL);
        vector<int>vec;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp == NULL) {
                ans.push_back(vec);
                vec.clear();
                if (!q.empty()) {
                    q.push(NULL);
                }
            } else {
                vec.push_back(temp->val);
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>rightSide;
        levelOrder(ans, root);
        for (auto v : ans) {
            rightSide.push_back(v.back());
        }
        return rightSide;
    }
};