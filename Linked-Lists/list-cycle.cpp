ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* fast=A;
    ListNode* slow=A;
    int count=0;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            break;
    }
    if(fast==NULL||fast->next==NULL)
        return NULL;
    ListNode* f=A;
    while(f!=slow)
    {
        f=f->next;
        slow=slow->next;
    }
    return f;
    }