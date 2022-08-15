class SparseVector:
    def __init__(self, nums: List[int]):
        self.nums = nums
        self.length = len(nums)

    def dotProduct(self, vec: 'SparseVector') -> int:
        return sum([self.nums[i] * vec.nums[i] for i in range(self.length)])
