ListNode* Solution::subtract(ListNode* A) {
    int sz=0;
    ListNode* temp=A;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    stack<int>st;
    temp=A;
    for(int i=0;i<(sz+1)/2;i++)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        st.push(temp->val);
        temp=temp->next;
    }
    ListNode* head=A;
    for(int i=0;i<sz/2;i++)
    {
        A->val=st.top()-A->val;
        st.pop();
        A=A->next;
    }
    return head;
}
