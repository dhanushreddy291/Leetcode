class Solution {
public:
    int minKnightMoves(int x, int y) {
        if (x == 0 && y == 0) return 0;
        int moves = 0;
        queue <pair <int, int>> Queue;
        Queue.push({0, 0});
        vector <int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
        vector <int> dy = {1, 2, 2, 1, -1, -2, -2, -1};
        vector <vector <bool>> Visited(607, vector <bool> (607, false));
        Visited[0][0] = true;
        while (!Queue.empty()) {
            int size = Queue.size();
            while (size--) {
                pair <int, int> Top = Queue.front();
                Queue.pop();
                for (int i = 0; i < 8; i++) {
                    int X = Top.first + dx[i], Y = Top.second + dy[i];
                    if (Visited[X + 300][Y + 300]) continue;
                    Visited[X + 300][Y + 300] = true;
                    Queue.push({X, Y});
                    if (X == x && Y == y) return moves + 1;
                }
            }
            moves++;
        }
        return -1;
    }
};