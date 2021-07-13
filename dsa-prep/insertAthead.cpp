void insertAthead(node* &head, int data) {
	if (head == NULL) {
		head = new node(data);
	}
	else {
		node*n = new node(data);
		n->next = head;
		head = n;
	}
	return;
}
