class Solution {
public:
    int countSubstrings(string s) {
        int N = s.size(), count = 0;
        vector <vector <bool>> DP(N, vector <bool> (N, false));
        for (int length = 0; length < N; length++) {
            for (int i = 0; i < N - length; i++) {
                int j = i + length;
                int Length = length + 1;
                if (Length == 1) DP[i][j] = true;
                else if (Length == 2) DP[i][j] = (s[i] == s[j]);
                else {
                    if (s[i] == s[j]) {
                        DP[i][j] = DP[i + 1][j - 1];
                    }
                }
                count += (DP[i][j] ? 1 : 0);
            }
        }
        return count;
    }
};