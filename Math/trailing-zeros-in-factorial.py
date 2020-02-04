class Solution:
    def trailingZeroes(self, A):
        temp=0
        i=1
        while(pow(5,i)<=A):
            temp+=A//pow(5,i)
            i+=1
        return temp