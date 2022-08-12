class Solution {
private:
    vector <bool> Visited;
    vector <vector <int>> Graph;
    void DFS(int i) {
        if (!Visited[i]) {
            Visited[i] = true;
            for (int& neighbour: Graph[i]) {
                DFS(neighbour);
            }
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        int connectedComponents = 0;
        Visited = vector <bool> (n, false);
        Graph = vector <vector <int>> (n);
        for (vector <int> &edge: edges) {
            Graph[edge[0]].push_back(edge[1]);
            Graph[edge[1]].push_back(edge[0]);
        }
        for (int i = 0; i < n; i++) {
            if (!Visited[i]) {
                DFS(i);
                connectedComponents++;
            }
        }
        return connectedComponents;
    }
};