class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        nums.sort()
        minVal = 101
        for i in range(len(nums)):
            if nums[i] < 0:
                if k > 0:
                    nums[i] = -nums[i]
                    k -= 1
                minVal = nums[i]
            elif k > 0:
                minVal = min(minVal, nums[i])
                break
        return sum(nums) if minVal == 0 or k % 2 == 0 else sum(nums) - 2 * minVal
