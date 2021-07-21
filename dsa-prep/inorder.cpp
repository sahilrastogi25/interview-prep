void InOrderPrint(node*root) {
	if (root == NULL) {
		return;
	}
	InOrderPrint(root->left);
	cout << root->data << " ";
	InOrderPrint(root->right);
	return;
}
