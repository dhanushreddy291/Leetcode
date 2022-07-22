class Solution {
private:
    int DP[1000][1000];
    int helper(vector<int> &A, int i, int j, int N) {
        if (j >= N) return 0;
        if (DP[i][j] != 0) return DP[i][j];
        int Val = A[i] + A[j];
        int idx = lower_bound(A.begin() + j, A.end(), Val) - A.begin();
        if (idx == N || A[idx] != Val) {
            DP[i][j] = 2;
            return 2;   
        }
        DP[i][j] = 1 + helper(A, j, idx, N);
        return DP[i][j];
    }
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int N = A.size(), Ans = 0;
        memset(DP, 0, sizeof(DP));
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                Ans = max(Ans, helper(A, i, j, N));
            }
        }
        return (Ans > 2) ? Ans : 0;
    }
};