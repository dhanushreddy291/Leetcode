class Solution:

    def __init__(self, w: List[int]):
        self.w = [0]
        for weight in w:
            self.w.append(self.w[-1] + weight)

    def pickIndex(self) -> int:
        return bisect.bisect_left(self.w, random.randint(1, self.w[-1])) - 1
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(w)
# param_1 = obj.pickIndex()