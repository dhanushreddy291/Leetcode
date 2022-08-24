class Solution:
    def setZeroes(self, A: List[List[int]]) -> None:
        N, M = len(A), len(A[0])
        for i in range(N):
            for j in range(M):
                if A[i][j] == 0:
                    for y in range(M):
                        A[i][y] = None if A[i][y] != 0 else 0
                    for x in range(N):
                        A[x][j] = None if A[x][j] != 0 else 0
                        
        for i in range(N):
            for j in range(M):
                if A[i][j] == None:
                    A[i][j] = 0
        