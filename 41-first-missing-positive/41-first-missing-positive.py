class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        N, Sum = len(nums), 0
        for i in range(N):
            if not 0 < nums[i] <= N:
                nums[i] = 0
        print(nums)
        for i in range(N):
            if abs(nums[i]) > 0 and abs(nums[i]) != 5000000:
                if nums[abs(nums[i]) - 1] == 0:
                    nums[abs(nums[i]) - 1] = -5000000
                else:
                    nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1])
        for i in range(N):
            if nums[i] >= 0:
                return i + 1
        return N + 1
