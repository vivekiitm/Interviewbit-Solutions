int Solution::jump(vector<int> &A) {
if(A.size()<=1)
    return 0;

if(A[0]==0)
    return -1;

int n = A.size();

int jumps = 1;
int reachable = 0;
int curr = A[0];

for(int i=1;i<n;i++)
{
    
    reachable = max(reachable, i+A[i]);
    
    if(curr==i && i!=n-1)
    {
        jumps++;
        curr = reachable;
        reachable = -1;
    }
    
    if(curr==i && i!=n-1)
        return -1;
}



return jumps;
}