class Solution {
    private int helper(String S, int i, int N, String word, int j, int M) {
        if (j == M) return 1;
        if (i == N) return 0;
        if (S.charAt(i) == word.charAt(j)) return helper(S, i + 1, N, word, j + 1, M);
        return helper(S, i + 1, N, word, j, M);
    }
    public int numMatchingSubseq(String s, String[] words) {
        int N = s.length(), W = words.length, count = 0;
        HashMap <String, Integer> map = new HashMap<>();
        for (int i = 0; i < W; i++) {
            if (map.containsKey(words[i])) {
                count += map.get(words[i]);
            } else {
                int val = helper(s, 0, N, words[i], 0, words[i].length());
                map.put(words[i], val);
                count += val;
            }
        }
        return count;
    }
}