class Solution
{
public:
    //Function to find the vertical order traversal of Binary Tree.
    void traverseTree(Node*root, map<int, vector<int>>&m, int d) {
        if (root == NULL) {
            return;
        }
        m[d].push_back(root->data);
        traverseTree(root->left, m, d - 1);
        traverseTree(root->right, m, d + 1);
    }
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int, vector<int>>m;
        vector<int>ans;
        int d = 0;
        traverseTree(root, m, d);
        for (auto p : m) {
            vector<int>result = p.second;
            for (auto x : result) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};