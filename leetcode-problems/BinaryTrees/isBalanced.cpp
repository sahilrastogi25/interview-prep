pair<bool, int>isBalanced(node*root) {
	if (root == NULL) {
		pair<bool, int>p;
		p.first = true;
		p.second = 0;
		return p;
	}
	pair<int, int>leftAns = isBalanced(root->left);
	pair<int, int>rightAns = isBalanced(root->right);
	int lh = leftAns.second;
	bool lbal = leftAns.first;
	bool rbal = rightAns.first;
	int rh = rightAns.second;
	int height = 1 + max(lh, rh);
	bool isBal = abs(lh - rh) <= 1 and lbal and rbal;
	return {isBal, height};
}