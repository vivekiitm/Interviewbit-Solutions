int Solution::solve(string A) {
    vector<string>sp={"A","E","O","I","U","a","e","i","o","u"};
    int ans=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(A[i]==sp[j][0])
            {
                ans=(ans+n-i)%10003;
                break;
            }
        }
    }
    return ans%10003;
}
