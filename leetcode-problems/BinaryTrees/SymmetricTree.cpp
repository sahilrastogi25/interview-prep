bool isMirror(Node* r1, Node*r2) {
    if (r1 == NULL and r2 == NULL) {
        return true;
    }
    if (!r1 or !r2) {
        return false;
    }
    if (r1 and r2) {
        if (r1->data == r2->data and isMirror(r1->left, r2->right) and isMirror(r1->right, r2->left)) {
            return true;
        }
    }
    return false;
}
bool isSymmetric(struct Node* root)
{
    // Code here
    return isMirror(root, root);
}