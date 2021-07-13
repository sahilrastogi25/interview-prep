void insertAtMiddle(node*head, int data, int pos) {
	if (pos == 0) {
		insertAthead(head, data);
	}
	else {
		node*temp = head;
		for (int i = 1; i <= pos - 1; i++) {
			temp = temp->next;
		}
		node*n = new node(data);
		node*p = temp->next;
		temp->next = n;
		n->next = p;
	}
	return;
}