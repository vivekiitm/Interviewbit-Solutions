class Solution:
    def compareVersion(self, A, B):
        a=map(int,A.split('.'))
        b=map(int,B.split('.'))
        while(a[len(a)-1]==0):
            a.pop()
            if(len(a)==0):
                break
        while(b[len(b)-1]==0 and len(b)>0):
            b.pop()
            if(len(b)==0):
                break
        for i in range(min(len(a),len(b))):
            if(a[i]>b[i]):
                return 1
            if(a[i]<b[i]):
                return -1
        if(len(a)>len(b)):
            return 1
        if(len(a)<len(b)):
            return -1
        return 0