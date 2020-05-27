class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return a list of integers
    def maxone(self, A, B):
        win_left = 0
        win_right = 0
        
        best_left = 0
        best_size = 0
        
        num_zeros = 0
        
        while(win_right < len(A)):
            
            if num_zeros <= B:
                if A[win_right] == 0:
                    num_zeros += 1
                win_right += 1
            
            
            if num_zeros > B:
                if A[win_left] == 0:
                    num_zeros -= 1
                win_left += 1
            
            if (win_right - win_left) > best_size and num_zeros <= B:
                best_size = win_right - win_left 
                best_left = win_left
        
        output = [i for i in range(best_left, best_left+best_size)]
        return output