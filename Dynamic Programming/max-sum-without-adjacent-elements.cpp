int Solution::adjacent(vector<vector<int> > &A) {
    int n=A[0].size();
    int incl = max(A[0][0], A[1][0]); 
    int excl = 0;
    int excl_new; 
    for (int i = 1; i<n; i++ )
    {
        excl_new = max(excl, incl); 
        incl = excl + max(A[0][i], A[1][i]); 
        excl = excl_new;
    } 
    return max(excl, incl);}