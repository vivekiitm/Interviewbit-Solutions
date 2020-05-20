int dfs(vector<string>A,int ch,int i,int j,string B)
{
    if(ch>=B.size())
        return 1;
    if(j-1>=0)
        if(A[i][j-1]==B[ch])
            if(dfs(A,ch+1,i,j-1,B))
                return 1;
    if(j+1<A[0].size())
        if(A[i][j+1]==B[ch])
            if(dfs(A,ch+1,i,j+1,B))
                return 1;
    if(i-1>=0)
        if(A[i-1][j]==B[ch])
            if(dfs(A,ch+1,i-1,j,B))
                return 1;
    if(i+1<A.size())
        if(A[i+1][j]==B[ch])
            if(dfs(A,ch+1,i+1,j,B))
                return 1;
    return 0;
}
int Solution::exist(vector<string> &A, string B) {
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]==B[0])
            {
                if(dfs(A,1,i,j,B))
                    return 1;
            }
        }
    }
    return 0;
}
