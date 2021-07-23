int findClosestinBST(Node* root, int target) {
	Node* temp = root;
	int diff = INT_MAX;
	int curr_diff;
	int curr_val;
	while (temp != NULL) {
		curr_diff = abs(temp->key - target);
		if (curr_diff == 0) {
			return temp->key;
		}
		if (curr_diff < diff) {
			diff = curr_diff;
			curr_val = temp->key;
		}
		if (temp->key < target) {
			temp = temp->right;
		}
		else if (temp->key > target) {
			temp = temp->left;
		}
	}
	return curr_val;
}