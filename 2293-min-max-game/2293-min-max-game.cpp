class Solution {
private:
    int helper(vector <int> &nums) {
        if (nums.size() == 1) return nums[0];
        else {
            vector <int> temp;
            for (int i = 0; i < nums.size() / 2; i++) {
                if (i % 2) temp.push_back(max(nums[2 * i], nums[2 * i + 1]));
                else temp.push_back(min(nums[2 * i], nums[2 * i + 1]));
            }
            return helper(temp);
        }
    }
public:
    int minMaxGame(vector<int>& nums) {
        return helper(nums);
    }
};