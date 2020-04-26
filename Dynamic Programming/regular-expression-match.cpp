int Solution::isMatch(const string A, const string B) {
    int n=A.size();
    int m=B.size();
    string str=A;
    string pattern=B;
    if (m == 0) 
        return (n == 0); 
    int dp[2][m+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=m;i++)
        if(B[i-1]=='*')
            dp[0][i]=dp[0][i-1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(B[j-1]=='*')
                dp[1][j]=max(dp[1][j-1],dp[0][j]);
            else if(B[j-1]=='?'||B[j-1]==A[i-1])
                dp[1][j]=dp[0][j-1];
            else
                dp[1][j]=0;
        }
        for(int j=0;j<=m;j++)
            dp[0][j]=dp[1][j];
    }
    return dp[1][m];
}