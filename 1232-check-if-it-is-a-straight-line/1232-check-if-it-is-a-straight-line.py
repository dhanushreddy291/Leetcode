class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        if coordinates[1][0] == coordinates[0][0]:
            for i in range(2, len(coordinates), 1):
                if coordinates[i][0] != coordinates[0][0]:
                    return False
            return True
        else:
            # Line Equation: y - y1 = ((y2 - y1)/(x2 - x1)) * (x - x1)
            slope = (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0])
            for i in range(2, len(coordinates), 1):
                if (coordinates[i][0] - coordinates[0][0]) * slope + coordinates[0][1] != coordinates[i][1]:
                    return False
            return True