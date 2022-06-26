class Solution:
    def fib(self, n: int) -> int:
        fibby = [0, 1]
        for i in range(2, n + 1):
            fibby.append(fibby[-1] + fibby[-2])
        return fibby[n]
