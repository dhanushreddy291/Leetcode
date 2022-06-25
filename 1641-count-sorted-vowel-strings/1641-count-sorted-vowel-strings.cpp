class Solution {
private:
    void helper(int index, int n, int currSize, int &counter)
    {
        if (currSize == n)
        {
            counter++;
            return;
        }
        for (int i = index; i < 5; i++)
        {
            helper(i, n, currSize + 1, counter);
        }
    }
public:
    int countVowelStrings(int n) {
        int count = 0;
        helper(0, n, 0, count);
        return count;
    }
};