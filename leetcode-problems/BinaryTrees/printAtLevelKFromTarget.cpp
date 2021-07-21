void printAtLevelK(node*root, int k, node* blocker) {
	if (root == NULL or k < 0 or root == blocker) {
		return;
	}
	if (k == 0) {
		cout << root->data << " ";
	}
	else {
		printAtLevelK(root->left, k - 1, blocker);
		printAtLevelK(root->right, k - 1, blocker);
	}
}
vector<node*>result;
bool printNodetoRoot(node* root, node* target) {
	if (root == NULL) {
		return false;
	}
	if (root == target) {
		result.push_back(root);
		return true;
	}
	bool f1 = printNodetoRoot(root->left, target);
	if (f1) {
		result.push_back(root);
		return true;
	}
	bool f2 = printNodetoRoot(root->right, target);
	if (f2) {
		result.push_back(root);
		return true;
	}
	return false;
}

void printAtkLevelFar(node* root, node*target, int k) {
	printNodetoRoot(root, target);
	vector<node*>path = result;
	for (int i = 0; i < path.size(); i++) {
		printAtLevelK(path[i], k - i, i == 0 ? nullptr : path[i - 1]);
	}
}