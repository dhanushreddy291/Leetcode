class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        N = len(nums)
        LIS = [1] * N
        for i in range(1, N):
            LIS[i] += max([LIS[j] if nums[j] < nums[i] else 0 for j in range(i)])
        return max(LIS)
