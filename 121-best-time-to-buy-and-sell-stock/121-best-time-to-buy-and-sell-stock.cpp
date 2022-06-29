class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min = prices[0], profit = 0, N = prices.size();
        for (int i = 1; i < N; i++) {
            if (prices[i] <= Min) Min = prices[i];
            else profit = max(profit, prices[i] - Min);
        }
        return profit;
    }
};