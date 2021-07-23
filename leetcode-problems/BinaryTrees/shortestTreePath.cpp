int distFromRoot(node* root, int a) {
    if (root->key == a) {
        return 0;
    }
    else if (root->key > a) {
        return 1 + distFromRoot(root->left, a);
    }
    else return 1 + distFromRoot(root->right, a);
}
int shortestDist(node * root, int a, int b) {
    //Complete this method
    if (root == NULL) {
        return 0;
    }
    if (root->key > a and root->key > b) {
        return shortestDist(root->left, a, b);
    }
    else if (root->key < a and root->key < b) {
        return shortestDist(root->right, a, b);
    }
    else return distFromRoot(root, a) + distFromRoot(root, b);
}