class Solution {
    public int candy(int[] ratings) {
        int N = ratings.length;
        int[] candies = new int[N];
        candies[0] = 1;
        for (int i = 1; i < N; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = 1 + candies[i - 1];
            } else candies[i] = 1;
        }
        int Sum = candies[N - 1];
        for (int i = N - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
                candies[i] = 1 + candies[i + 1];
            }
            Sum += candies[i];
        }
        return Sum;
    }
}