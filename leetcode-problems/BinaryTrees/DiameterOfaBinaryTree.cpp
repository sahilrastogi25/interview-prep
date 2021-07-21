//O(N^2)

int height(node *root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}

int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}
	int d1 = diameter(root->left);
	int d2 = diameter(root->right);
	int d3 = height(root->left) + height(root->right);
	return max(d1, max(d2, d3));
}


//O(N)

pair<int, int>heightDiameter(node*root) {
	if (root == NULL) {
		pair<int, int>p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int>leftAns = heightDiameter(root->left);
	pair<int, int>rightAns = heightDiameter(root->right);
	int ld = leftAns.second;
	int lh = leftAns.first;
	int rh = rightAns.first;
	int rd = rightAns.second;
	int height = 1 + max(lh, rh);
	int diameter = max(lh + rh, max(ld, rd));
	return {height, diameter};
}