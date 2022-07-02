class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:

        def addBoundaries(arr, boundary):
            arr.insert(0, 0)
            arr.append(boundary)
            
        def findMaxDistance(arr, n):
            dist = 0
            for i in range(n):
                dist = max(dist, arr[i + 1] - arr[i])
            return dist

        horizontalCuts.sort()
        verticalCuts.sort()

        addBoundaries(horizontalCuts, h)
        addBoundaries(verticalCuts, w)
        
        return findMaxDistance(horizontalCuts, len(horizontalCuts) - 1) * findMaxDistance(verticalCuts, len(verticalCuts) - 1) % (10**9 + 7)
