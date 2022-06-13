class Solution:
    def fib(self, n: int) -> int:
        fibby = [0, 1]
        if n < 2: return fibby[n]
        for i in range(2, n + 1):
            fibby.append(fibby[-1] + fibby[-2])
        return fibby[-1]