class Solution {
public:
    string longestCommonPrefix(vector<string> &S) {
        string Answer = "";
        int Min = INT_MAX, N = S.size();
        for (int i = 0; i < S.size(); i++) {
            int t = S[i].size();
            Min = min(Min, t);
        }
        for (int j = 0; j < Min; j++) {
            char K = S[0][j];
            for (int i = 1; i < N; i++) {
                if (K != S[i][j]) return Answer;
            }
            Answer += K;
        }
        return Answer;
    }
};