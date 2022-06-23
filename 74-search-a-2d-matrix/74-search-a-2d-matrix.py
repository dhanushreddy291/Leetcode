class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows, columns = len(matrix), len(matrix[0])
        start, end = 1, rows * columns

        def coordinatesFindKaro(N, M, Val):
            return (max((Val // M) - 1, 0) if Val % M == 0 else Val // M, M - 1 if Val % M == 0 else max((Val % M) - 1, 0))

        while start <= end:
            mid = (start + end) // 2
            (x, y) = coordinatesFindKaro(rows, columns, mid)
            if matrix[x][y] == target: return True
            elif matrix[x][y] > target: end = mid - 1
            else: start = mid + 1
        
        return False