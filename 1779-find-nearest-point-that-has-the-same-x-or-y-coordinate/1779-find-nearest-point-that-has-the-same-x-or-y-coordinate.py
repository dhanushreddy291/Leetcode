class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        minDist = 100000
        for i in range(len(points)):
            if points[i][0] == x or points[i][1] == y:
                if abs(x - points[i][0]) + abs(y - points[i][1]) < minDist:
                    minDist = abs(x - points[i][0]) + abs(y - points[i][1])
                    minIndex = i
        return -1 if minDist == 100000 else minIndex
