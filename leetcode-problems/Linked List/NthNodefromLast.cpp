int getNthFromLast(Node *head, int n)
{
    // Your code here
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