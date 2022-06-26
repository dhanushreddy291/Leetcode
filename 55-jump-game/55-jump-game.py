class Solution:
    def canJump(self, nums: List[int]) -> bool:
        N = len(nums) - 1
        for i in range(N - 1, -1, -1):
            if nums[i] >= N - i:
                N = i
        return N == 0
