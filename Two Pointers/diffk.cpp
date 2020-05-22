int Solution::diffPossible(vector<int> &A, int B) {
    int n=A.size();
    int i=0,j=0;
    while(i<n&&j<n)
    {
        if(A[i]-A[j]==B)
        {
            if(i==j)
                i++;
            else
                return 1;
        }
        else
        {
            if(A[i]-A[j]>B)
                j++;
            else
                i++;
        }
    }
    return 0;
}
