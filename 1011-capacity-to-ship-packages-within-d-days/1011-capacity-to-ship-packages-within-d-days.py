class Solution:
    def shipWithinDays(self, weights: List[int], D: int) -> int:
        lo, hi, N = max(weights), sum(weights), len(weights)
        while lo <= hi:
            mid = (lo + hi) // 2
            i, days, Sum = 0, 0, 0
            while i < N:
                if Sum + weights[i] == mid:
                    Sum = 0
                    days += 1
                elif Sum + weights[i] > mid:
                    Sum = weights[i]
                    days += 1
                else:
                    Sum += weights[i]
                i += 1
            if Sum > 0:
                days += 1
            if days > D:
                lo = mid + 1
            else:
                hi = mid - 1
        return lo
