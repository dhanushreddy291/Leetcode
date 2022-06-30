class Solution:
    def minMoves(self, nums: List[int]) -> int:
        k = min(nums)
        return sum([x - k for x in nums])
