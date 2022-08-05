class Solution {
private:
    int N, M;
    vector <vector <int>> DP;
    bool helper(int i, int j, string &s, string &t) {
        if (j == M) return 1;
        if (i == N) return 0;
        if (DP[i][j] != -1) return DP[i][j];
        if (s[i] == t[j]) return DP[i][j] = helper(i + 1, j + 1, s, t);
        return DP[i][j] = helper(i + 1, j, s, t);
    }
public:
    bool isSubsequence(string s, string t) {
        N = t.size();
        M = s.size();
        DP = vector <vector <int>> (N, vector <int> (M, -1));
        return helper(0, 0, t, s);
    }
};