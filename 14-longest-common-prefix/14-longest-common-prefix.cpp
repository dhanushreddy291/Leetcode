class Solution {
public:
    string longestCommonPrefix(vector<string> &S) {
        int Min = INT_MAX;
        int N = S.size();
        for (int i = 0; i < N; i++) {
            int t = S[i].size();
            Min = min(Min, t);
        }
        string Answer = "";
        for (int j = 0; j < Min; j++) {
            bool valid = true;
            char A = S[0][j]; 
            for (int i = 1; i < N; i++) {
               if (S[i][j] != A) valid = false;
            }
            if (valid) Answer += A;
            else return Answer;
        }
        return Answer;
    }
};