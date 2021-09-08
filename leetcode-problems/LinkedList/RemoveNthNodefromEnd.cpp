ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode*slow = head;
    ListNode*fast = head;
    while (n--) {
        fast = fast->next;
    }
    //If fast becomes null then we want to remove the head
    if (fast == NULL) return head->next;
    fast = fast->next;
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}