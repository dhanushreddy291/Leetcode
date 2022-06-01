class Solution {
    public boolean canJump(int[] nums) {
        int N = nums.length - 1;
        for (int i = N - 1 ; i >= 0; i--) {
            if (nums[i] >= N - i) N = i;
        }
        return N == 0;
    }
}