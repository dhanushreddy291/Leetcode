class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        Sum, maxSum = 0, -10000
        for i in range(len(nums)): 
            Sum += nums[i]
            maxSum = max(maxSum, Sum)
            if Sum < 0: Sum = 0
        return maxSum
