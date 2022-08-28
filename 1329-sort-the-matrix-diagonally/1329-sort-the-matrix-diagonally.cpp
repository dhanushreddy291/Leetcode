class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int N = mat.size(), M = mat[0].size();
        unordered_map <int, priority_queue <int, vector <int>, greater <int>>> Map;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                Map[i - j].push(mat[i][j]);
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                mat[i][j] = Map[i - j].top();
                Map[i - j].pop();
            }
        }
        return mat;
    }
};