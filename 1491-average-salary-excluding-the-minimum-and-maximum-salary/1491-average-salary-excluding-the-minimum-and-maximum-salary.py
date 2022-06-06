class Solution:
    def average(self, salary: List[int]) -> float:
        Sum, count, maxElement, minElement = 0, 0, max(salary), min(salary)
        for sal in salary:
            if sal != maxElement and sal != minElement:
                Sum += sal
                count += 1
        return Sum / count