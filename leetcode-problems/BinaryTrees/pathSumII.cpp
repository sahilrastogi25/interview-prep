vector<vector<int>>ans;
void pathSumHelper(TreeNode* root, vector<int>&v, int targetSum) {
    if (root == NULL) return;
    v.push_back(root->val);
    targetSum -= root->val;
    //we will get answer only at leaf nodes
    if (root->left == NULL and root->right == NULL) {
        if (targetSum == 0) {
            ans.push_back(v);
        }
    } else {
        pathSumHelper(root->left, v, targetSum);
        pathSumHelper(root->right, v, targetSum);
    }
    //backtrack to previous nodes
    v.pop_back();
    return;
}
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<int>v;
    pathSumHelper(root, v, targetSum);
    return ans;
}