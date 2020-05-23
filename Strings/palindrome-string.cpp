int Solution::isPalindrome(string A) {
    vector<int>vec;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if((int)A[i]>=65&&(int)A[i]<=90)
            vec.push_back((int)A[i]+32);
        if((int)A[i]>=97&&(int)A[i]<=122)
            vec.push_back((int)A[i]);
        if((int)A[i]>=48&&(int)A[i]<58)
            vec.push_back((int)A[i]);
    }
    n=vec.size();
    for(int i=0;i<n;i++)
    {
        if(vec[i]!=vec[n-i-1])
            return 0;
    }
    return 1;
}
