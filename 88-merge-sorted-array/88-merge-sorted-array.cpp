class Solution {
public:
    void merge(vector<int>& A, int M, vector<int>& B, int N) {
        int i = M - 1, j = N - 1, k = N + M;
        while (i >= 0 && j >= 0) {
            A[--k] = (A[i] > B[j]) ? A[i--] : B[j--];
        }
        while (j >= 0) A[--k] = B[j--];
        return;
    }
};