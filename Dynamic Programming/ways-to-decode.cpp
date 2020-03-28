int Solution::numDecodings(string A) {
    int n=A.size();
    int count[n+1];  
    count[0] = 1; 
    count[1] = 1;
    if(A[0]=='0')   
         return 0; 
    for (int i = 2; i <= n; i++) 
    { 
        count[i] = 0; 
        if (A[i-1] > '0') 
            count[i] = count[i-1]; 
        if (A[i-2] == '1' ||  
              (A[i-2] == '2' && A[i-1] < '7') ) 
            count[i] += count[i-2]; 
    } 
    return count[n]; 
}