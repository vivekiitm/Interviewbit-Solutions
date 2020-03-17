class Solution:
    def colorful(self, A):
        b=str(A)
        d=[]
        n=len(b)
        for i in range(n+1):
            for j in range(i+1,n+1):
                temp=b[i:j]
                pro=1
                for k in range(len(temp)):
                    pro=pro*int(temp[k])
                d.append(pro)
        d.sort()
        for i in range(1,len(d)):
            if(d[i]==d[i-1]):
                return 0
        return 1
                
