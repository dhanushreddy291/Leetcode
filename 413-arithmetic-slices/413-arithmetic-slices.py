class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        N = len(nums)
        count, size = 0, N - 3
        if N > 2:
            isArithmetic = [0] * (N - 2)
            for j in range(2, N):
                isArithmetic[j - 2] = 1 if nums[j - 2] + nums[j] == 2 * nums[j - 1] else 0
                count += isArithmetic[j - 2]
            while size > 0:
                localCount = 0
                for i in range(size):
                    isArithmetic[i] *= isArithmetic[i + 1]
                    localCount += isArithmetic[i]
                if localCount == 0:
                    return count
                else:
                    count += localCount
                isArithmetic.pop()
                size -= 1
        return count
