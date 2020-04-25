int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int dpi[n];
    int dpd[n];
    for(int i=0;i<n;i++)
    {
        dpi[i]=1;dpd[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
                if(dpi[j]>=dpi[i])
                    dpi[i]=dpi[j]+1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(A[i]>A[j])
                if(dpd[j]>=dpd[i])
                    dpd[i]=dpd[j]+1;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ans<dpi[i]+dpd[i]-1)
            ans=dpi[i]+dpd[i]-1;
    }
    return ans;
}