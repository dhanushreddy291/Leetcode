class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        int N = nums1.size();
        unordered_map <int, vector <int>> Map;
        for (int i = 0; i < N; i++) {
            Map[nums2[i]].push_back(i);
        }
        for (int i = 0; i < N; i++) {
            auto &vec = Map[nums1[i]];
            nums1[i] = vec.back();
            vec.pop_back();
        }
        return nums1;
    }
};