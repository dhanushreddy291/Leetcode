class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        size = len(arr)
        max_step = size if size%2 else size-1
        step = 1
        ans = list()
        while step<=max_step:
            for i in range(size):
                if i+step>=size+1:
                    continue
                else:
                    ans.append(sum(arr[i:i+step]))
            step +=2

        return sum(ans)
