class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        N, Sum = len(nums), 0
        for i in range(N):
            if not 0 < nums[i] <= N:
                nums[i] = 0
        for i in range(N):
            Abs = abs(nums[i])
            if 0 < Abs <= N:
                if nums[Abs - 1] == 0:
                    nums[Abs - 1] = -5000000
                else:
                    nums[Abs - 1] = -abs(nums[Abs - 1])
        for i in range(N):
            if nums[i] >= 0:
                return i + 1
        return N + 1
