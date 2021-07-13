ListNode* removeNthFromEnd(ListNode* &head, int n) {
	ListNode* slow = head;
	ListNode* fast = head;
	for (int i = 1; i <= n + 1; i++) {
		fast = fast->next;
	}
	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = slow->next->next;
	return head;
}