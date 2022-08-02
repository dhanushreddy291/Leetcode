class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int N = nums.size(), Sum = accumulate(nums.begin(), nums.end(), 0);
        if (Sum & 1) return false;
        vector <vector <bool>> DP(2, vector<bool>(Sum/2 + 1, false));
        DP[0][0] = true;
        for (int i = 0; i < N; i++) {
            DP[1][0] = true;
            for (int sum = 1; sum <= Sum/2; sum++) {
                if (nums[i] > sum) DP[1][sum] = DP[0][sum];
                else DP[1][sum] = DP[0][sum] || DP[0][sum - nums[i]];
            }
            DP[0] = DP[1];
        }
        return DP[0][Sum/2];
    }
};