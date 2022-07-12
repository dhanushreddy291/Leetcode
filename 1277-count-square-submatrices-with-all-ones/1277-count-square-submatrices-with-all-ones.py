class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        N, M, Sum = len(matrix), len(matrix[0]), 0
        for i in range(N):
            for j in range(M):
                if i * j > 0 and matrix[i][j] > 0:
                    matrix[i][j] += min(matrix[i - 1][j - 1], matrix[i][j - 1], matrix[i - 1][j])
        return sum([sum(row) for row in matrix])