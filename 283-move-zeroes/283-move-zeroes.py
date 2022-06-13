class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        j, zeroes = -1, 0
        if 0 not in nums: return nums
        for i in range(len(nums)):
            if nums[i] == 0:
                if j == -1:
                    j = i
                zeroes += 1
            elif nums[i] != 0 and j != -1 and i != j:
                nums[j] = nums[i]
                j += 1 
        nums[-zeroes:] = [0]*zeroes
        return nums