void checkSib(Node* root, vector<int>& result) {
    if (root == NULL) {
        return;
    }
    if (root->left != NULL and root->right != NULL) {
        checkSib(root->left, result);
        checkSib(root->right, result);
    }
    else if (root->right != NULL) {
        result.push_back(root->right->data);
        checkSib(root->right, result);
    }
    else if (root->left != NULL) {
        result.push_back(root->left->data);
        checkSib(root->left, result);
    }
    return;
}
vector<int> noSibling(Node* root)
{
    // code here
    vector<int>result;
    checkSib(root, result);
    if (result.size() == 0) {
        result.push_back(-1);
    }
    return result;
}