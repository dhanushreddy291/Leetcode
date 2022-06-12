class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        i = len(nums) - 1
        while i >= 2:
            if nums[i - 2] + nums[i - 1] > nums[i]:
                return sum(nums[i-2:i+1])
            i -= 1
        return 0