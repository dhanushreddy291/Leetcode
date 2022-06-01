class Solution {
    public int maxSubArray(int[] nums) {
        int Sum = 0, maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            Sum += nums[i];
            maxSum = Math.max(maxSum, Sum);
            if (Sum < 0) Sum = 0;
        }
        return maxSum;
    }
}