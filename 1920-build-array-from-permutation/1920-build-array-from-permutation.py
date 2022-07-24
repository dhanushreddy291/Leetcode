class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        N = len(nums)
        # orig Value will be given nums[i] % N
        # new Value will be given by nums[i] // N
        for i in range(N):
            nums[i] += N * (nums[nums[i]] % N)
        for i in range(N):
            nums[i] = nums[i] // N
        return nums