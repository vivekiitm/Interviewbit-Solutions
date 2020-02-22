class Solution:
    def nextPermutation(self, A):
        for idx in range(len(A) - 1, -1, -1):
            if idx > 0:
                if A[idx] < A[idx - 1]:
                    continue
                else:
                    idx_swap = 1
                    while A[len(A) - idx_swap] < A[idx - 1]:
                        idx_swap += 1
                    A[idx - 1], A[len(A) - idx_swap] = A[len(A) - idx_swap], A[idx - 1]
                    A[idx:len(A)] = reversed(A[idx:len(A)])
                    return A
            else:
                return sorted(A)