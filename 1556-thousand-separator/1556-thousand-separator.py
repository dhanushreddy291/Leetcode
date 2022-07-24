class Solution:
    def thousandSeparator(self, n: int) -> str:
        n = str(n)
        if len(n) < 4:
            return n
        return self.thousandSeparator(int(n[:-3])) + "." + n[-3:]