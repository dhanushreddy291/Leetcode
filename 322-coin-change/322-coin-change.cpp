class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        vector <int> minCoinsRequired(amount + 1, amount + 1);
        minCoinsRequired[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (i < coins[j]) break;
                minCoinsRequired[i] = min(minCoinsRequired[i], 1 + minCoinsRequired[i - coins[j]]);
            }
        }
        return minCoinsRequired[amount] > amount ? -1: minCoinsRequired[amount];
    }
};