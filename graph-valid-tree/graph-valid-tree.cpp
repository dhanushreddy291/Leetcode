class Solution {
private:
    vector <int> parent, size;
    int find(int x) {
        int root = x;
        while (x != parent[x]) {
            x = parent[x];
        }
        while (root != x) {
            int oldRoot = parent[root];
            parent[root] = x;
            root = oldRoot;
        }
        return x;
    }
    bool Union(int x, int y) {
        int X = find(x);
        int Y = find(y);
        if (X == Y) return false;
        if (size[X] < size[Y]) {
            parent[X] = Y;
            size[Y] = max(size[Y], 1 + size[X]);
        } else {
            parent[Y] = X;
            size[X] = max(1 + size[Y], size[X]);
        }
        return true;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if (edges.size() != n - 1) return false;
        parent = vector <int> (n);
        size = vector <int> (n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
        for (vector <int> &edge: edges) {
            if (!Union(edge[0], edge[1])) {
                return false;
            }
        }
        return true;
    }
};