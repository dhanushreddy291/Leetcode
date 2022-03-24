class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        int rescueBoats = 0;
        for (int leftPointer = 0, rightPointer = people.length - 1; leftPointer <= rightPointer; rescueBoats++, rightPointer--) {
            if (people[leftPointer] + people[rightPointer] <= limit) leftPointer++;
        }
        return rescueBoats;
    }
}