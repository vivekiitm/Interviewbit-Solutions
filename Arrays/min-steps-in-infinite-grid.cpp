int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int l=A.size();
    int steps=0;
    int x=A[0],y=B[0];
    for(int i=1;i<l;i++)
    {
        steps=steps+std::max(abs(A[i]-x),abs(B[i]-y));
        x=A[i];
        y=B[i];
    }
    return steps;
}
