class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow, *fast, *entry;
        slow = head;
        fast = head;
        entry = head;
        if (head == NULL or head->next == NULL) {
            return NULL;
        }
        while (fast->next and fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                while (slow != entry) {
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};