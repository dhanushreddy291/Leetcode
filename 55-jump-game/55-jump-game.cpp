class Solution {
public:
    bool canJump(vector<int>& nums) {
        int N = nums.size() - 1;
        for (int i = N - 1; i >= 0; i--) {
            if (nums[i] >= N - i) N = i;
        }
        return N == 0;
    }
};