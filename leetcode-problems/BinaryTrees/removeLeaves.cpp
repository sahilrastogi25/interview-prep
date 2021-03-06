node* removeLeaves(node* root) {
	if (root == NULL) {
		return NULL;
	}
	if (root->left == NULL and root->right == NULL) {
		return NULL;
	}
	root->left = removeLeaves(root->left);
	root->right = removeLeaves(root->right);
	return root;
}