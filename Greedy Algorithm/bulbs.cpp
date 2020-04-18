
int Solution::bulbs(vector<int> &A) {
    int ans=0;
    int cond=1;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(cond==1)
        {
            if(A[i]!=1)
            {
                ans++;
                cond=0;
            }
        }
        else
        {
            if(A[i]!=0)
            {
                ans++;
                cond=1;
            }
        }
    }
    return ans;
}
