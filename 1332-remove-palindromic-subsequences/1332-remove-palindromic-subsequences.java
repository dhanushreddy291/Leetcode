class Solution {
    public int removePalindromeSub(String s) {
        int N = s.length();
        for (int i = 0; i < N / 2; i++) {
            if (s.charAt(i) != s.charAt(N - 1 - i)) return 2;
        }
        return N > 0 ? 1 : 0;
    }
}