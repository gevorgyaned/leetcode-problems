ListNode* insertionSortList(ListNode* head) {
    ListNode* tmp = new ListNode();
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* prev = tmp;
        while (prev->next != NULL && prev->next->val <= curr->val) {
            prev = prev->next;
        }

        ListNode* next = curr->next;
        curr->next = prev->next;
        prev->next = curr;
        curr = next;
    }

    return tmp->next;
}

