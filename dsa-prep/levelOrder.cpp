node* buildTree() {
	int d;
	cin >> d;
	node* root = new node(d);
	queue<node*>q;
	q.push(root);
	while (!q.empty()) {
		node*curr = q.front();
		q.pop();
		int d1, d2;
		cin >> d1 >> d2;
		if (d1 != -1) {
			curr->left = new node(d1);
			q.push(curr->left);
		}
		if (d2 != -1) {
			curr->right = new node(d2);
			q.push(curr->right);
		}
	}
	return root;
}

void levelOrderPrint(node*root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node*temp = q.front();
		q.pop();
		if (temp == NULL) {
			if (!q.empty()) {
				cout << endl;
				q.push(NULL);
			}
		} else {
			cout << temp->data << " ";
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}
	}
	return;
}