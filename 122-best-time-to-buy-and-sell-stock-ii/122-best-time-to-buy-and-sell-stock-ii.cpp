class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min = prices[0], N = prices.size(), i = 0, profit = 0;
        while (++i < N) {
            if (prices[i] < Min) Min = prices[i];
            else {
                profit += (prices[i] - Min);
                Min = prices[i];
            }
        }
        return profit;        
    }
};