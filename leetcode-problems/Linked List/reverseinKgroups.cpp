class Solution {
public:
    int length(ListNode * node) {
        int count = 0;
        while (node != NULL) {
            count++;
            node = node->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }
        if (length(head) < k) {
            return head;
        }
        int cnt = 1;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp;
        while (curr != NULL and cnt <= k) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            cnt++;
        }
        if (temp != NULL) {
            head->next = reverseKGroup(temp, k);
        }
        return prev;
    }
};