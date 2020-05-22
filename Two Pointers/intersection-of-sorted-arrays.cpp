vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int>ans;
    int i=0;int j=0;
    int n=A.size(),m=B.size();
    while(i<n&&j<m)
    {
        if(A[i]==B[j])
        {
            ans.push_back(A[i]);
            i++;j++;
        }
        else if(A[i]<B[j])
            i++;
        else
            j++;
    }
    return ans;
}
