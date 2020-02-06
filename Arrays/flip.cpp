vector<int> Solution::flip(string A) {
    
    int temp=0;
    for(int i=0;i<A.length();i++)
        if(A[i]=='1')
            temp++;
    if(temp==A.length())
    {
        vector<int> ans;
        return ans;
    }
    int i=0,j=A.length()-1;
    while(A[i]=='1'&&i<A.length())
    {
        i++;
    }

    while(A[j]=='1')
    {
        j--;
    }
    vector<int> ans={i,i};
    int temp1=0;
    int temp2=0;
    int temp3;
    for(int k=i;k<=j;k++)
    {
        if(A[k]=='0')
        {
            if(temp1==0)
            {
                temp3=k;
                temp1++;
            }
            if(temp1!='0')
            {
                temp1++;
            }
            if(temp2<temp1)
            {
                ans[0]=temp3;
                ans[1]=k;
                temp2=temp1;
            }
        }
        if(A[k]=='1')
        {
            if(temp1>=1)
            {
                temp1--;
            }
        }
    }
    ans[0]++;
    ans[1]++;
    return ans;
}
