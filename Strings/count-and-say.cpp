string Solution::countAndSay(int A) {
    string ans="1";
    string temp="";
    A--;
    while(A--)
    {
        int i=0;
        int j=i+1;
        while(i<s.size())
        {
            int j=i+1;
            int cnt=1;
            while(j<s.size() && s[j]==s[i])
            {
                cnt++;
                j++;
            }
            ans+=to_string(cnt)+s[i];
            i=j;
        }
        ans=temp;
        temp="";
    }
    return s;
}
