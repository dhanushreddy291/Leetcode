class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        return False if n is 0 else True if n is 1 else n % 3 == 0 and self.isPowerOfThree(n // 3)