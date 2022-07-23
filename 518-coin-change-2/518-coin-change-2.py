class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        DP = [1] + [0] * amount
        for coin in coins:
            for j in range(coin, amount + 1):
                DP[j] += DP[j - coin]
        return DP[-1]
