class Solution:
    @lru_cache(maxsize=None)
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        return s1==''and s2==s3 or s2==''and s1==s3 or(s1 and s2 and s3 and(s1[0]==s3[0]and self.isInterleave(s1[1:],s2,s3[1:])or s2[0]==s3[0]and self.isInterleave(s1,s2[1:],s3[1:])))