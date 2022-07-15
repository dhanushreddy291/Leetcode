class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        currCount, totalCount = 0, 0
        for i in range(2, len(nums)):
            if nums[i] + nums[i - 2] == 2 * nums[i - 1]:
                currCount += 1
                totalCount += currCount
            else:
                currCount = 0
        return totalCount
