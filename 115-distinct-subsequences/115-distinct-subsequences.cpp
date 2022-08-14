class Solution {
private:
    vector <vector <int>> DP;
    int helper(string &s, string &t, int i, int j) {
        if (j == t.size()) return 1;
        if (i == s.size()) return 0;
        if (DP[i][j] != -1) return DP[i][j];
        return DP[i][j] = helper(s, t, i + 1, j) + ((s[i] == t[j]) ? helper(s, t, i + 1, j + 1) : 0);
    }
public:
    int numDistinct(string s, string t) {
        DP = vector <vector <int>> (s.size(), vector <int> (t.size(), -1));
        return helper(s, t, 0, 0);
    }
};