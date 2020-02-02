vector<int> Solution::findPerm(const string A, int B) {
    int s=0;
    for(int i=0;i<B-1;i++)
    {
        if(A[i]=='D')
            s++;
    }
    int l=s+2;
    vector<int> ans;
    ans.push_back(s+1);
    for(int i=0;i<B-1;i++)
    {
        if(A[i]=='D')
        {
            ans.push_back(s);
            s--;
        }
        else
        {
            ans.push_back(l);
            l++;
        }
    }
    return ans;
}
