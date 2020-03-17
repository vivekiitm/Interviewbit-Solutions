
int Solution::divide(int B, int A) {
    int ans=0;
    while(B<A)
    {
        B=B-A;
        ans++;
    }
    return ans;
}