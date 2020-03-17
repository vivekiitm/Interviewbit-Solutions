typedef long long ll;
int Solution::divide(int A, int B) {
if(A == INT_MIN && B == -1)
return INT_MAX;
int sign;
ll p = A;
ll q = B;
if((p < 0 && q < 0) || (p > 0) && (q > 0))
{
if(p < 0 && q < 0)
{
p = (-1)*p;
q = (-1)*q;
}
sign = 0;
}
else
{
if(p < 0)
p = (-1)*p;
else if(q < 0)
q = (-1)*q;
sign = 1;

}

ll a = p;
ll b = q;
ll ans = 0;
while(a >= q)
{
    b = q;
    ll cou = 0;
    while(b <= a)
    {
        cou++;
        b <<= 1;
    }
    ans |= (1 << (cou-1));
    a = a - (b>>=1);
}
if(ans >= INT_MAX)
    return INT_MAX;
else
{
    if(sign == 1)
    return (-1 * ans);
    else
    return ans;
}
}
