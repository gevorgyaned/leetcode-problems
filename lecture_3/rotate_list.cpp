struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !k || !head->next) return head;
    struct ListNode *tmp = head;
    int len = 0;

    while (tmp->next) {
        ++len;
        tmp = tmp->next;
    }

    ++len;

    int n = len - k;
    
    if (k >= len) {
        if (k % len == 0) return head;
        n = len - (k % len);
    }

    struct ListNode *tmp1 = head;
    for (int i = 0; i < n - 1; ++i) {
        tmp1 = tmp1->next;
    }

    struct ListNode *res = tmp1->next;
    tmp1->next = NULL;

    tmp->next = head;

    return res;
}
