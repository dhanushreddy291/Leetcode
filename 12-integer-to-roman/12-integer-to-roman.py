class Solution:
    def intToRoman(self, num: int) -> str:
        romanStrings = ["I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"]
        romanVals = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
        index = len(romanVals) - 1
        romanNumber = ""
        while num > 0:
            if num >= romanVals[index]:
                romanNumber += romanStrings[index]
                num -= romanVals[index]
            else:
                index -= 1
        return romanNumber
