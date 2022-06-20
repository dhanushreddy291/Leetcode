from bisect import bisect_left

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        return bisect_left(nums, target) if target <= nums[-1] and nums[bisect_left(nums, target)] == target else -1