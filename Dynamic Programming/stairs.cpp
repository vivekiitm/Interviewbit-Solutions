int Solution::climbStairs(int A) {
    int n = A;
    if(n == 1)
        return 1;
    int stepPrePre = 1;
    int stepPre = 1;
    int current;
    for(int i = 2; i <= n; i++) 
    {
        current = stepPrePre + stepPre;
        stepPrePre = stepPre;
        stepPre = current;
    }
    return current;
}