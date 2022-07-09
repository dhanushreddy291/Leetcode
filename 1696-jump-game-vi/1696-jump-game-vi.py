class Solution:
    def maxResult(self, nums: List[int], k: int) -> int:
        n = len(nums)
        q = collections.deque([(nums[0], 0)])
        ans = nums[0]
        for i in range(1, n):
            while q and q[0][1] + k < i:
                q.popleft()
            ans = q[0][0] + nums[i]
            while q and q[-1][0] <= ans:
                q.pop()
            q.append((ans, i))
        return ans
