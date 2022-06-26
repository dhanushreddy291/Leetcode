class Solution:
    def findMin(self, nums: List[int]) -> int:
        lo, hi = 0, len(nums) - 1
        while lo < hi:
            mid = (lo + hi) // 2
            if mid > 0 and nums[mid - 1] > nums[mid]:
                return nums[mid]
            elif nums[lo] <= nums[mid] and nums[mid] > nums[hi]:
                lo = mid + 1
            else:
                hi = mid - 1
        return nums[lo]
