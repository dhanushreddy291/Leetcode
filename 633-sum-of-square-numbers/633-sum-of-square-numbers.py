class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        b, i = int(math.sqrt(c)), 0
        while i <= b:
            d = c - i * i
            a = int(math.sqrt(d))
            if a * a == d:
                return True
            i += 1
        return False
