from bisect import bisect_left, bisect_right

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        index1 = bisect_left(nums, target)
        index2 = bisect_right(nums, target)
        N = len(nums)
        if not 0 <= index1 < N or nums[index1] != target:
            return [-1, -1]
        else:
            return [index1, index2 - 1]