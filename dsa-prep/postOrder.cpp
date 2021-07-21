void postOrderPrint(node*root) {
	if (root == NULL) {
		return;
	}
	postOrderPrint(root->left);
	postOrderPrint(root->right);
	cout << root->data << " ";
	return;
}