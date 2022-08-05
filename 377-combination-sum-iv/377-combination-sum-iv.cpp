class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unordered_set <int> Set;
        vector <int> ways(target + 1, 0);
        ways[0] = 1;
        for (int &num: nums) {
            Set.insert(num);
        }
        for (int sum = 1; sum <= target; sum++) {
            for (int j = 0; j < sum; j++) {
                int k = sum - j;
                if (Set.find(k) != Set.end()) {
                    if (long(ways[sum]) + ways[j] > INT_MAX) break;
                    ways[sum] += ways[j];
                }
            }
        }
        return ways[target];
    }
};