class Solution:
    def countOdds(self, low: int, high: int) -> int:
        return low % 2 if low == high else (high - low) // 2 + (high % 2 | low % 2)
