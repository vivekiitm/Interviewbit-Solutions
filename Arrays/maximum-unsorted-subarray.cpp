vector<int> Solution::subUnsort(vector<int> &A) {
    int len=A.size();
    int i1=0,i2=len-1;
    vector<int> ans;
    while(A[i1+1]>=A[i1]&&i1<len-1)
        i1++;
    if(i1==len-1)
    {
        ans.push_back(-1);
        return ans;
    }
    while(A[i2-1]<=A[i2]&&i2>0)
        i2--;
    int min=A[len-1],max=A[0];
    for(int i=i1;i<=i2;i++)
    {
        if(A[i]<min)
            min=A[i];
        if(A[i]>max)
            max=A[i];
    }
    for(int i=0;i<i2;i++)
    {
        if(A[i]>min)
        {
            i1=i;
            break;
        }
    }
    for(int i=len-1;i>i2;i--)
    {
        if(A[i]<max)
        {
            i2=i;
            break;
        }
    }
    ans.push_back(i1);
    ans.push_back(i2);
    return ans;
}
