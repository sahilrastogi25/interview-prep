bool nodeToroot(Node* root, int target, vector<int>& result) {
    if (root == NULL) {
        return false;
    }
    if (root->data == target) {
        result.push_back(root->data);
        return true;
    }
    bool f1 = nodeToroot(root->left, target, result);
    if (f1) {
        result.push_back(root->data);
        return true;
    }
    bool f2 = nodeToroot(root->right, target, result);
    if (f2) {
        result.push_back(root->data);
        return true;
    }
    return false;
}
int findDist(Node* root, int a, int b) {
    // Your code here
    vector<int>path1, path2;
    nodeToroot(root, a, path1);
    nodeToroot(root, b, path2);

    int i = path1.size() - 1;
    int j = path2.size() - 1;

    while (i >= 0 and j >= 0 and path1[i] == path2[j]) {
        i--;
        j--;
    }
    i++;
    j++;
    return i + j;

}