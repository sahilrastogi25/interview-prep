bool printNodetoRoot(node* root, node* target, vector<int>&result) {
	if (root == NULL) {
		return false;
	}
	if (root == target) {
		result.push_back(root->data);
		return true;
	}
	bool f1 = printNodetoRoot(root->left, target, result);
	if (f1) {
		result.push_back(root->data);
		return true;
	}
	bool f2 = printNodetoRoot(root->right, target, result);
	if (f2) {
		result.push_back(root->data);
		return true;
	}
	return false;
}
