Node* insert(Node*root, int key) {
	if (!root) {
		root = new Node(key);
		return root;
	}
	if (key <= root->key) {
		root->left = insert(root->left, key);
	}
	else {
		root->right = insert(root->right, key);
	}
	return root;
}

bool search(Node* root, int key) {
	if (root == NULL) {
		return false;
	}
	if (root->key == key) {
		return true;
	}
	else if (root->key > key) {
		bool ls = search(root->left, key);
		if (ls) {
			return true;
		}
	} else {
		bool rs = search(root->right, key);
		if (rs) {
			return true;
		}
	}
	return false;
}

void printInorder(Node* root) {
	if (!root) {
		return;
	}
	printInorder(root->left);
	cout << root->key << " ";
	printInorder(root->right);
	return;
}