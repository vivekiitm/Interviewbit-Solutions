def nCr(n, r): 
    return (fact(n) / (fact(r)  
                * fact(n - r))) 
  
def fact(n): 
    res = 1
    for i in range(2, n+1): 
        res = res * i 
    return res

class Solution:
	def uniquePaths(self, A, B):
	    if(A==1):
	        return 1;
	    if(B==1):
	        return 1;
	    else:
	        return int(nCr(A+B-2,A-1));