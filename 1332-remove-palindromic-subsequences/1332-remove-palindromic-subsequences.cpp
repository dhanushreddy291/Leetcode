class Solution {
public:
    int removePalindromeSub(string s) {
        int N = s.size();
        for (int i = 0; i < N / 2; i++) {
            if (s[i] != s[N - 1 - i]) return 2;
        }
        return N > 0;
    }
};