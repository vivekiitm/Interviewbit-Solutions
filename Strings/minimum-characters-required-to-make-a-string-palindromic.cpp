bool ispalindrome(string s) 
{ 
    int l = s.length(); 
    int j; 
    for(int i = 0, j = l - 1; i <= j; i++, j--) 
    { 
        if(s[i] != s[j]) 
            return false; 
    } 
    return true; 
} 
int Solution::solve(string A) {
    int cnt=0;
    while(A.size()>0)
    {
        if(ispalindrome(A))
            return cnt;
        else
        {
            cnt++;
            A.erase(A.begin()+A.size()-1);
        }
    }
    return cnt;
}
