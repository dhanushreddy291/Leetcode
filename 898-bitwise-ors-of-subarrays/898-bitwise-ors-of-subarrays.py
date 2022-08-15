class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        ans, prev = set(), set()
        for num in arr:
            new = set()
            for p in prev:
                new.add(p | num)
            new.add(num)
            prev = new
            for n in new:
                ans.add(n)
        return len(ans)
