Node* minHeightBST(Node* root, vector<int>a, int s, int e) {
	if (s > e) {
		return NULL;
	}
	int mid = s + (e - s) / 2;
	root = new Node(a[mid]);
	root->left = minHeightBST(root->left, a, s, mid - 1);
	root->right = minHeightBST(root->right, a, mid + 1, e);
	return root;
}