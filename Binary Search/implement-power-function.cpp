int Solution::pow(int x, int n, int d) {
    if (x == 0) return 0;
    if (d == 0) return -1;
    if (n == 0) return 1;
    long long res = x;
    long long rem_fix = 1;
    while (n > 1)
    {
        if (n % 2 == 1)
            rem_fix = (rem_fix * res)%d;
        res = ((res%d) * (res%d)) % d;
        n = n / 2;
    }
    res = (res *rem_fix) % d;
    if (res < 0)
        res += d;
    return res;
}