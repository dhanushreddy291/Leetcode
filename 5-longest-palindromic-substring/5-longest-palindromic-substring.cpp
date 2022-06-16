class Solution {
public:
    string longestPalindrome(string s) {
        int N = s.size(), start = 0, maxLength = 0;
        vector <vector <bool>> DP(N, vector <bool> (N));
        for (int length = 0; length < N; length++) {
            for (int i = 0, j = length; j < N; i++, j++) {
                if (i == j) DP[i][j] = true;
                else if (length == 1) DP[i][j] = (s[i] == s[j]);
                else DP[i][j] = (s[i] == s[j] && DP[i + 1][j - 1]);
                if (DP[i][j] and j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
        return s.substr(start, maxLength);
    }
};