class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        vector <int> DP(n + 1);
        DP[0] = DP[1] = 0;
        for (int num = 2; num <= n; num++) {
            if (num & 1) {
                for (int j = num/2; j >= 1; j--) {
                    if (num % j == 0) {
                        DP[num] = DP[j] + num/j;
                        break;
                    }
                }
            } else {
                DP[num] = DP[num / 2] + 2;
            }
        }
        return DP[n];
    }
};