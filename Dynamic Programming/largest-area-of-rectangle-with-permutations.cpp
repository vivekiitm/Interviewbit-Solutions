int Solution::solve(vector<vector<int> > &A){
    int r=A.size();
    int c=A[0].size();
    if(r==0||c==0)
        return 0;
    int aux[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            aux[i][j]=0;
    for(int j=0;j<c;j++)
        if(A[0][j]==1)
            aux[0][j]=1;
    for(int i=1;i<r;i++)
        for(int j=0;j<c;j++)
            if(A[i][j]==1)
                aux[i][j]=aux[i-1][j]+1;
    for(int i=0;i<r;i++)
        sort(aux[i],aux[i]+c,greater<int>());
    int ans=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(aux[i][j]*(j+1)>ans)
                ans=aux[i][j]*(j+1);
    return ans;
}
