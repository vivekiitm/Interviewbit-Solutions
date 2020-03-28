int Solution::chordCnt(int A) {
    int n=2*A;
    long long int dpArray[n + 1]={ 0 }; 
    dpArray[0] = 1,dpArray[2] = 1; 
    for (int i=4;i<=n;i+=2)
        for (int j=0;j<i-1;j+=2)
            dpArray[i] =(dpArray[i]+(dpArray[j]*dpArray[i-2-j]))%1000000007; 
    return dpArray[n]%1000000007;}