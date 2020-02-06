vector<int> Solution::maxset(vector<int> &A) {
    vector<int> res;
    int len=A.size();
    int temp=0,temp3=0;
    for(int i=0;i<len;i++)
    {
        if(A[i]>=0)
            temp++;
        if(A[i]<0)
            temp3++;
    }
    if(temp3==len)
        return res;
    if(temp==len)
        return A;
    long long int temp1=0,temp2=0,temp4=0;
    int k=0;
    while(A[k]<0)
        k++;
    int start=0,end=0;
    temp=-1;
    for(int i=k;i<len;i++)
    {
        if(A[i]>=0)
        {
            if(temp1==0)
            {
                if(A[i]!=0&&temp<0)
                {
                    temp=i;
                }
                if(A[i]==0&&temp<0)
                    temp=i;
            }
            if(temp1>=0)
                temp1=temp1+A[i];
            if(A[i]>=0)
            {
                temp4=i;
            }
            if(temp2<=temp1)
            {
                if(temp2<temp1)
                {
                    temp2=temp1;
                    start=temp;
                    end=temp4;
                }
                if(temp2==temp1)
                {
                    if(temp4-temp>end-start)
                    {
                        start=temp;
                        end=temp4;
                    }
                }
            }
        }
        if(A[i]<0)
        {
            temp1=0;
            temp4=0;
            temp=-1;
        }
    }
    for(int i=start;i<=end;i++)
        res.push_back(A[i]);
    return res;
}
