class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        N = len(nums)
        isArithmetic = [[0] * N for _ in range(N - 2)]
        count = 0
        for length in range(3, N + 1):
            i = 0
            for j in range(length - 1, N):
                if length == 3:
                    isArithmetic[i][j] = 1 if nums[i] + nums[j] == 2 * nums[i + 1] else 0
                else:
                    isArithmetic[i][j] = isArithmetic[i][j - 1] * isArithmetic[i + 1][j]
                count += isArithmetic[i][j]
                i += 1
        return count
