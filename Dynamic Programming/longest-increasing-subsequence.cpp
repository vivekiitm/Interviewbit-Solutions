int Solution::lis(const vector<int> &A) {
    if(A.size() == 0){
        return 0;}
    vector<int> val(A.size(), 1);
    int sol = 1;
    for(int i = 1; i < A.size(); i++)
        for(int j = 0; j < i; j++)
            if(A[i] > A[j]){
                val[i] = max(val[j]+1, val[i]);
                if(val[i] > sol)
                    sol = val[i];}
    return sol;}