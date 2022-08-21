class Solution {
private:
    vector <int> Answer;
    void helper(vector <int> &a, vector <int> &b, vector <int> &c, int x, int y, int z) {
        if (x == a.size() || y == b.size() || z == c.size()) return;
        if (a[x] == b[y] && a[x] == c[z]) {
            Answer.push_back(a[x]);
            helper(a, b, c, x + 1, y + 1, z + 1);
        }
        else if (a[x] < b[y]) helper(a, b, c, x + 1, y, z);
        else if (a[x] > b[y]) helper(a, b, c, x, y + 1, z);
        else if (a[x] < c[z]) helper(a, b, c, x + 1, y, z);
        else helper(a, b, c, x, y, z + 1);
    }
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        helper(arr1, arr2, arr3, 0, 0, 0);
        return Answer;
    }
};