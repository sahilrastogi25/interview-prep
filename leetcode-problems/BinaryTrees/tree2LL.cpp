class LinkedList {
public:
	Node* head;
	Node* tail;
};


LinkedList tree2LL(Node* root) {
	LinkedList L;
	if (root == NULL) {
		L.head = NULL;
		L.tail = NULL;
		return L;
	}
	if (root->left == NULL and root->right == NULL) {
		L.head = L.tail = root;
	}
	else if (root->left != NULL and root->right == NULL) {
		LinkedList LL = tree2LL(root->left);
		LL.tail->right = root;
		L.head = LL.head;
		L.tail = root;
	} else if (root->right != NULL and root->left == NULL) {
		LinkedList RL = tree2LL(root->right);
		root->right = RL.head;
		L.head = root;
		L.tail = RL.tail;
	} else {
		LinkedList LL = tree2LL(root->left);
		LinkedList RL = tree2LL(root->right);
		LL.tail->right = root;
		root->right = RL.head;
		L.head = LL.head;
		L.tail = RL.tail;
	}
	return L;
}