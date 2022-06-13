class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        i, j = 0, 0
        for j in range(len(nums)):
            if nums[j]: 
                nums[i] = nums[j]
                i += 1
        for k in range(i, len(nums)):
            nums[k] = 0