int min(int x,int y,int z){
    return min(min(x,y),z);}

int Solution::minDistance(string A, string B) {
    int n=A.size();
    int m=B.size();
    int dp[n+1][m+1];
    for(int i=0;i<=m;i++)
    {
        dp[0][i]=i;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j])+1;
        }
    }

    return dp[n][m];
}
