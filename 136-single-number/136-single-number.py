class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        S = set(nums)
        for i in S:
            if nums.count(i) == 1:
                return i
        