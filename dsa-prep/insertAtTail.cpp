void insertAtTail(node* &head, int data) {
	if (head == NULL) {
		head = new node(data);
		return;
	}
	node* temp = head;
	while (temp != NULL) {
		if (temp->next == NULL) {
			node*n = new node(data);
			n->next = temp->next;
			temp->next = n;
			break;
		}
		temp = temp->next;
	}
	return;
}