int Solution::isPower(int A) {
    if(A==0)
        return 0;
    else if(A==1)
        return 1;
    else
    {
        for(int i=2;i<=sqrt(A);i++)
        {
            int x=log(A)/log(i);
            if(pow(i,x)==A)
                return 1;
        }
    }
    return 0;
}