class Solution {
  public:
    vector < vector < int >> transpose(vector < vector < int >> & matrix) {
      int N = matrix.size(), M = matrix[0].size();
      if (N == M) {
        for (int i = 0; i < N; i++) {
          for (int j = i + 1; j < M; j++) {
            if (i != j) swap(matrix[i][j], matrix[j][i]);
          }
        }
        return matrix;
      } else {
        vector < vector < int >> Answer;
        for (int j = 0; j < M; j++) {
          vector < int > Row;
          for (int i = 0; i < N; i++) {
            Row.push_back(matrix[i][j]);
          }
          Answer.push_back(Row);
        }
        return Answer;
      }
    }
};