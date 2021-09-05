//Using slow and fast pointers
int kthLastElement(node *head, int k) {
    node*slow = head;
    node*fast = head;
    int count = 1;
    while (count <= k) {
        count++;
        fast = fast->next;
    }
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}
int getNthFromLast(Node *head, int n)
{
    Node*temp = head;
    int len = 0;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    if (len < n) {
        return -1;
    }
    temp = head;
    for (int i = 1; i < len - n + 1; i++) {
        temp = temp->next;
    }
    return temp->data;
}