class Solution:
    def diagonal(self, A):
        N=len(A)
        a=[]
        for i in range(2*N-1):
            a.append([])
        for i in range(2*N-1):
            for j in range(N):
                if((i-j)>=0 and (i-j)<N):
                    a[i].append(A[j][i-j])
        return a