void printAtLevelK(node*root, int k) {
	if (root == NULL) {
		return;
	}
	if (k == 0) {
		cout << root->data << " ";
	}
	else {
		printAtLevelK(root->left, k - 1);
		printAtLevelK(root->right, k - 1);
	}
}