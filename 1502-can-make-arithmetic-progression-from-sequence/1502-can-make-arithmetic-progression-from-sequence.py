class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        N, d = len(arr), arr[1] - arr[0]
        if arr[N-1] + arr[0] != sum(arr) * 2 / N: return False
        for i in range(1, N - 1):
            if arr[i + 1] - arr[i] != d:
                return False
        return True