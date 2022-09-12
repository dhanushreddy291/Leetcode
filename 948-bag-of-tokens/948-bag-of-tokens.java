class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        int i = 0, j = tokens.length - 1, maxScore = 0, score = 0;
        Arrays.sort(tokens);
        while (i <= j) {
            if (power >= tokens[i]) {
                power -= tokens[i];
                i++;
                score++;
            } else {
                if (score == 0) return maxScore;
                score -= 1;
                power += tokens[j];
                j--;
            }
            maxScore = Math.max(maxScore, score);
        }
        return maxScore;
    }
}