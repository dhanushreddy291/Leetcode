class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int Sum = 0, count = 0;
        unordered_map <int, int> Map;
        for (int &num: nums) {
            Sum += num;
            if (Sum == k) count++;
            count += Map[Sum - k];
            Map[Sum]++;
        }
        return count;
    }
};