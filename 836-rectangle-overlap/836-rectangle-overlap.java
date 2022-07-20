class Solution {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        int a = Math.max(rec1[0], rec2[0]);
        int c = Math.min(rec1[2], rec2[2]);
        if (a >= c) return false;
        int b = Math.max(rec1[1], rec2[1]);
        int d = Math.min(rec1[3], rec2[3]);
        return b < d;
    }
}