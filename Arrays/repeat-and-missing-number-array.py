class Solution:
    def repeatedNumber(self, A):
        return [sum(A)-sum(set(A)),int((len(A)*(len(A)+1)/2)-sum(set(A)))]