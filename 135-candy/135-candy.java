class Solution {
    public int candy(int[] ratings) {
        
        int Sum = 0;
        int[] candies = new int[ratings.length];

        for (int i = 0; i < ratings.length; i++) {
            candies[i] = 1;
        }

        for (int i = 1; i < ratings.length; i++) {
            if (ratings[i] > ratings[i - 1]) candies[i] = 1 + candies[i - 1];
        }

        for (int i = ratings.length - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) candies[i] = Math.max(1 + candies[i + 1], candies[i]);
        }

        for (int i = 0; i < ratings.length; i++) {
            Sum += candies[i];
        }

        return Sum;
    }
}