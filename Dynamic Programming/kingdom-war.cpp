int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int dp[m+1]={0};
    int ans=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        int temp[m+1]={0};
        for(int j=m-1;j>=0;j--)
        {
            temp[j]=temp[j+1]+A[i][j];
        }
        for(int j=0;j<m;j++)
        {
            dp[j]+=temp[j];
            ans=max(ans,dp[j]);
        }
    }
    return ans;
}