class Solution {
    public int countOdds(int low, int high) {
        return low == high ? low % 2 : (high - low) / 2 + (high % 2 | low % 2);
    }
}