class Solution {
private:
    int helper(vector<int> &A, vector <vector<int>> &DP, int i, int j, int N) {
        if (j >= N) return 0;
        if (DP[i][j] != -1) return DP[i][j];
        int Val = A[i] + A[j];
        int idx = lower_bound(A.begin() + j, A.end(), Val) - A.begin();
        if (idx == N || A[idx] != Val) return DP[i][j] = 2;
        return DP[i][j] = 1 + helper(A, DP, j, idx, N);
    }
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int N = A.size(), Ans = 0;
        vector <vector<int>> DP(N, vector <int> (N, -1));
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                Ans = max(Ans, helper(A, DP, i, j, N));
            }
        }
        return (Ans > 2) ? Ans : 0;
    }
};