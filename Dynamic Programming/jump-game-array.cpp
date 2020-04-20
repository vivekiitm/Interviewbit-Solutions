int Solution::canJump(vector<int> &A) {
    int ans=A[0];
    if(A.size()==1)
        return 1;
    if(ans==0)
        return 0;
    int temp=0;
    int i;
    int cond=1;
    for(i=1;i<A.size();i++)
    {
        temp++;
        if(A[i]>ans-temp)
        {
            temp=0;
            ans=A[i];
        }
        else if(ans-temp<=0)
        {
            cond=0;
            break;
        }
    }
    return cond;
}
