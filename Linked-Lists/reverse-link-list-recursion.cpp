ListNode* rec(ListNode *head) {
    if(head->next == NULL) {
        return head;
    }
    
    ListNode *new_head = rec(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}

ListNode* Solution::reverseList(ListNode* A) {
    if(A == NULL) {
        return A;
    }
    return rec(A);
}