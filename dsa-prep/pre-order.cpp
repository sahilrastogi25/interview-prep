node*buildTree() {
	int d;
	cin >> d;
	node*root = new node(d);
	if (d == -1) {
		return NULL;
	}
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void preOrderPrint(node*root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preOrderPrint(root->left);
	preOrderPrint(root->right);
}