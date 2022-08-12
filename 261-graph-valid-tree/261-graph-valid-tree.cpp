class Solution {
private:
    vector <bool> Visited;
    bool DFS(int node, int parent, vector <vector <int>> &Graph) {
        if (Visited[node]) return false;
        Visited[node] = true;
        for (int &neighbour: Graph[node]) {
            if (neighbour != parent) {
                if (!DFS(neighbour, node, Graph)) {
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector <vector <int>> Graph(n);
        for (vector <int> &edge: edges) {
            Graph[edge[0]].push_back(edge[1]);
            Graph[edge[1]].push_back(edge[0]);
        }
        Visited = vector <bool> (n, false);
        if (!DFS(0, -1, Graph)) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (!Visited[i]) {
                return false;
            }
        }
        return true;
    }
};