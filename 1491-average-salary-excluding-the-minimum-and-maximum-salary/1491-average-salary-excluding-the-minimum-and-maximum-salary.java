class Solution {
    public double average(int[] salary) {
        return (double)(Arrays.stream(salary).sum() - Arrays.stream(salary).max().getAsInt() - Arrays.stream(salary).min().getAsInt()) / (salary.length - 2);
    }
}