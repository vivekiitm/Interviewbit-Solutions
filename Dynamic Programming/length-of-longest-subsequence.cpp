/*
Given an array of integers, find the length of longest subsequence which is first increasing then decreasing.

**Example: **

For the given array [1 11 2 10 4 5 2 1]

Longest subsequence is [1 2 10 4 2 1]

Return value 6

*/

int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    int lis[n];
    int lds[n];
    for(int i=0;i<n;i++){
     lis[i]=1;
     lds[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j]&&lis[i]<lis[j]+1)
             lis[i]=lis[j]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[i]>A[j]&&lds[i]<lds[j]+1)
             lds[i]=lds[j]+1;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
     ans=max(ans,lis[i]+lds[i]-1);
    return ans;
}