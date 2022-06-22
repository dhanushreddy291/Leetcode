class Solution:
    def findTheDistanceValue(self, arr1: List[int], arr2: List[int], d: int) -> int:
        
        N = len(arr2)
        arr2.sort()
        distanceValue = 0

        for num in arr1:
            index1, index2 = bisect_left(arr2, num + d), bisect_left(arr2, num - d)
            if 0 <= index1 < N:
                if arr2[index1] == num + d:
                    continue
            if 0 <= index2 < N:
                if arr2[index2] == num - d:
                    continue            
            if  index1 == index2:
                distanceValue += 1

        return distanceValue