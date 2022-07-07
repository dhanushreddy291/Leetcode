class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        i = 0
        [0,1,3]
        for num in nums:
            if num != i:
                return i
            i += 1
        return i