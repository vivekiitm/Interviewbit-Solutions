int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int>p;
    vector<int>n;
    int zero=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            zero=1;
        else if(A[i]>0)
        {
            p.push_back(A[i]);
        }
        else if(A[i]<0)
        {
            n.push_back(-1*A[i]);
        }
    }
    sort(n.begin(),n.end());
    sort(p.begin(),p.end());
    int np=p.size();
    int nn=n.size();
    if(np>=3)
    {
        if(nn>=2)
        {
            return max(p[np-1]*p[np-2]*p[np-3],p[np-1]*n[nn-1]*n[nn-2]);
        }
        else
            return p[np-1]*p[np-2]*p[np-3];
    }
    if(np==2)
    {
        if(nn>=2)
        {
            return p[np-1]*n[nn-1]*n[nn-2];
        }
        if(nn==1)
        {
            if(zero)
                return 0;
            else
                return A[0]*A[1]*A[2];
        }
        if(nn==0)
        {
            return 0;
        }
    }
    if(np==1)
    {
        if(nn>=2)
            return p[0]*n[nn-1]*n[nn-2];
        return 0;
    }
    if(np==0)
    {
        if(zero)
            return 0;
        else
            return -1*n[0]*n[1]*n[2];
    }
}
