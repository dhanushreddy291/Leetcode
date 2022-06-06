class Solution {
    public double average(int[] salary) {
        int Sum = 0, count = 0, maxElement = Arrays.stream(salary).max().getAsInt(), minElement = Arrays.stream(salary).min().getAsInt();
        for (int sal: salary) {
            if (sal != maxElement && sal != minElement) {
                Sum += sal;
                count++;
            }
        }
        return (double) Sum / (double) count;
    }
}