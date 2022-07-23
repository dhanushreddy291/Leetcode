class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        count = 0
        sortedHeights = sorted(heights)
        for i in range(len(heights)):
            if heights[i] != sortedHeights[i]:
                count += 1
        return count
