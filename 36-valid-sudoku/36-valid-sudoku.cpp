class Solution {
private:
    int findGrid(int i, int j) {
        return (i / 3) * 3 + (j/3);
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <vector <bool>> Row(9, vector <bool> (9, false)), Column(9, vector <bool> (9, false)), Grid(9, vector <bool> (9, false));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int gridId = findGrid(i, j), num = (board[i][j] - '1');
                    if (Row[i][num] || Column[j][num] || Grid[gridId][num]) {
                        return false;
                    }
                    Row[i][num] = Column[j][num] = Grid[gridId][num] = true;
                }
            }
        }
        return true;
    }
};