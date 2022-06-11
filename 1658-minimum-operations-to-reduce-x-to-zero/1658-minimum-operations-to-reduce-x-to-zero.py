class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        currSum, left, right, target, N, maxLength = 0, 0, 0, sum(nums) - x, len(nums), 0
        if target < 0: return -1
        elif target == 0: return N
        else:
            while right < N:
                currSum += nums[right]
                while currSum > target and left < N:
                    currSum -= nums[left]
                    left += 1
                if currSum == target:
                    maxLength = max(maxLength, right - left + 1)
                right += 1
        return -1 if maxLength == 0 else N - maxLength