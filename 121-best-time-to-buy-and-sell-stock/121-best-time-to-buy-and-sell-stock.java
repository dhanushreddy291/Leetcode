class Solution {
    public int maxProfit(int[] prices) {
        int Min = prices[0], profit = 0, N = prices.length;
        for (int i = 1; i < N; i++) {
            if (prices[i] <= Min) Min = prices[i];
            else profit = Math.max(profit, prices[i] - Min);
        }
        return profit;
    }
}
