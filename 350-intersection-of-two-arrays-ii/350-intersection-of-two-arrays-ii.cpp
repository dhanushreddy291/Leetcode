#include "valarray"

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> Map;
        int N = nums1.size(), M = nums2.size(), j = 0;
        for (int i = 0; i < N; i++) {
            Map[nums1[i]]++;
        }
        for (int i = 0; i < M; i++) {
            if (Map.find(nums2[i]) != Map.end()) {
                if (Map[nums2[i]] > 0) {
                    Map[nums2[i]]--;
                    nums1[j++] = nums2[i];   
                }
            }
        }
        return vector <int> (nums1.begin(), nums1.begin() + j);
    }
};