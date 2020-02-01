int Solution::firstMissingPositive(vector<int> &A) {
    int len=A.size();
    for(int i=0;i<len;i++)
    {
        if(A[i]==0)
            A[i]=-1;
    }
    int temp;
    int tem;
    for(int i=0;i<len;i++)
    {
        if(A[i]>0&&A[i]<=len)
        {
            temp=A[i];
            tem=A[i];
            while(temp>0&&temp<=len)
            {
                if(A[tem-1]>0&&A[tem-1]<=len)
                {
                    temp=A[tem-1];
                    A[tem-1]=0;
                    tem=temp;
                }
                else
                {
                    A[tem-1]=0;
                    temp=0;
                }
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        if(A[i]!=0)
            return (i+1);
    }
    return (len+1);
}
