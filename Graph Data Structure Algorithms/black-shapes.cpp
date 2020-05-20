void dfs(vector<vector<int>>&vis,int x,int y)
{
    if(x-1>=0)
    {
        if(vis[y][x-1]==1)
        {
            vis[y][x-1]=-1;
            dfs(vis,x-1,y);
        }
    }
    if(x+1<vis[0].size())
    {
        if(vis[y][x+1]==1)
        {
            vis[y][x+1]=-1;
            dfs(vis,x+1,y);
        }
    }
    if(y+1<vis.size())
    {
        if(vis[y+1][x]==1)
        {
            vis[y+1][x]=-1;
            dfs(vis,x,y+1);
        }
    }
    if(y-1>=0)
    {
        if(vis[y-1][x]==1)
        {
            vis[y-1][x]=-1;
            dfs(vis,x,y-1);
        }
    }
}
int Solution::black(vector<string> &A) {
    vector<vector<int>>vis;
    vector<int>temp;
    for(int i=0;i<A[0].size();i++)
        temp.push_back(0);
    for(int i=0;i<A.size();i++)
    {
        vis.push_back(temp);
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]=='X')
                vis[i][j]=1;
        }
    }
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<=A[0].size();j++)
        {
            if(vis[i][j]==1)
            {
                ans++;
                vis[i][j]=-1;
                dfs(vis,j,i);
            }
        }
    }
    return ans;
}
