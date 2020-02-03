class Solution:
    def hammingDistance(self, A):
        l = []
        for i in A:
            l.append('{:032b}'.format(i))
        c=0 
        l=list(zip(*l))
        for i in l:
            a=i.count('1')
            c+= a*(len(A)-a)
        return 2*c%1000000007