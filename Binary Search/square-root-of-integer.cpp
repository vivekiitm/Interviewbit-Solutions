int Solution::sqrt(int A) {
    long long int start=1;long long int end=A;
    long long int ans=1;
    if(A==0||A==1)
        return A;
    while(start-1<end)
    {
        long long int mid=start+(end-start)/2;
        if(mid*mid==A)
            return mid;
        if(mid*mid<A)
        {
            start=mid+1;
            ans=mid;
        }
        else
            end=mid-1;
    }
    return ans;
}
