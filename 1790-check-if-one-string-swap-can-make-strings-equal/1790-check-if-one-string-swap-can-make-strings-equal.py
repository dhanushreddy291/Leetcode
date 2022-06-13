class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        map1, map2, misplaced = {}, {}, 0
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                map1[s1[i]] = 1 + map1[s1[i]] if s1[i] in map1 else 1
                map2[s2[i]] = 1 + map2[s2[i]] if s2[i] in map2 else 1
                misplaced += 1
        return map1 == map2 and misplaced < 3
                