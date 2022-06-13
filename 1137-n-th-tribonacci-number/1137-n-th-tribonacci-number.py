class Solution:
    def tribonacci(self, n: int) -> int:
        tribby = [0, 1, 1]
        for i in range(3, n + 1):
            tribby.append(tribby[-1] + tribby[-2] + tribby[-3])
        return tribby[n]