class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode*l3 = dummyNode;
        if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }
        while (l1 != NULL and l2 != NULL) {
            if (l1->val <= l2->val) {
                l3->next = l1;
                l1 = l1->next;
                l3 = l3->next;
            }
            else if (l1->val > l2->val) {
                l3->next = l2;
                l2 = l2->next;
                l3 = l3->next;
            }
        }
        while (l1 != NULL) {
            l3->next = l1;
            l1 = l1->next;
            l3 = l3->next;
        }
        while (l2 != NULL) {
            l3->next = l2;
            l2 = l2->next;
            l3 = l3->next;
        }
        return dummyNode->next;
    }
};