
int replaceWithSum(node* root) {
	if (root == NULL) {
		return 0;
	}
	if (!root->left and !root->right) {
		return root->data;
	}
	int LS = replaceWithSum(root->left);
	int RS = replaceWithSum(root->right);
	int temp = root->data;
	root->data = LS + RS;
	return root->data + temp;
}