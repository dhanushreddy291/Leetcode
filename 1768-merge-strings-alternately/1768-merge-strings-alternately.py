class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        return ''.join([str(word1[i]) + str(word2[i]) for i in range(min(len(word1), len(word2)))]) + word1[min(len(word1), len(word2)):] + word2[min(len(word1), len(word2)):]