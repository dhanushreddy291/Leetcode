class Solution {
  public:
    int maxArea(vector < int > & height) {
        int N = height.size(), area = 0, i = 0, j = N - 1;
        while (i < j) {
            area = max(area, ((height[i] > height[j]) ? height[j] * (j-- - i) : height[i] * (j - i++)));
        }
        return area;
    }
};