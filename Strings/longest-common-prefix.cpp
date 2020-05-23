string Solution::longestCommonPrefix(vector<string> &A) {
    string ans=A[0];
    for(int i=1;i<A.size();i++)
    {
        ans=ans.substr(0,min(A[i].size(),ans.size()));
        for(int j=0;j<min(ans.size(),A[i].size());j++)
        {
            if((A[i][j]!=ans[j]))
            {
                ans=ans.substr(0,j);
                break;
            }
        }
    }
    return ans;
}
