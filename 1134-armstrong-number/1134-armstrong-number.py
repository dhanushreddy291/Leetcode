class Solution:
    def isArmstrong(self, n: int) -> bool:
        k = len(str(n))
        return sum([pow(int(a), k) for a in str(n)]) == n