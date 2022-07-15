class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        N = len(nums)
        if N < 3:
            return 0
        isArithmetic = [0] * (N - 2)
        i, count, size = 0, 0, N - 3
        i = 0
        for j in range(2, N):
            isArithmetic[i] = 1 if nums[i] + nums[j] == 2 * nums[i + 1] else 0
            count += isArithmetic[i]
            i += 1
        while size > 0:
            for i in range(size):
                isArithmetic[i] *= isArithmetic[i + 1]
                count += isArithmetic[i]
            size -= 1
        return count
