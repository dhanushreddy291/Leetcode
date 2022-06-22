class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        Set = set()
        for num in arr:
            if num % 2 == 0:
                if num // 2 in Set:
                    return True
            if 2 * num in Set:
                return True
            Set.add(num)
        return False