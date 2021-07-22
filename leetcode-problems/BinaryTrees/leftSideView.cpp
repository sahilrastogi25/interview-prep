vector<vector<int>> treeTraversal(Node* root) {
    vector<vector<int>>result;
    queue<Node*>q;
    if (root == NULL) {
        return result;
    }
    q.push(root);
    q.push(NULL);
    vector<int>vec;
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            result.push_back(vec);
            vec.clear();
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            vec.push_back(temp->data);
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
vector<int> leftView(Node *root)
{
    // Your code here
    vector<vector<int>>ans = treeTraversal(root);
    vector<int>result;
    for (int i = 0; i < ans.size(); i++) {
        result.push_back(ans[i][0]);
    }
    return result;
}