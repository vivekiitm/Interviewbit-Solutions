int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ans=INT_MAX;
    int x=0,y=0,z=0;
    int p=A.size(),q=B.size(),r=C.size();
    while(x<p&&y<q&&z<r)
    {
        if(A[x]==min(A[x],min(B[y],C[z])))
        {
            ans=min(ans,max(A[x],max(B[y],C[z]))-min(A[x],min(B[y],C[z])));
            x++;
        }
        else if(B[y]==min(A[x],min(B[y],C[z])))
        {
            ans=min(ans,max(A[x],max(B[y],C[z]))-min(A[x],min(B[y],C[z])));
            y++;
        }
        else
        {
            ans=min(ans,max(A[x],max(B[y],C[z]))-min(A[x],min(B[y],C[z])));
            z++;
        }
    }
    return ans;
}
