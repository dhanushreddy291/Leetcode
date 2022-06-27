class Solution
{
private:
    vector<int> add(vector<int> &nums, int k)
    {
        vector<int> Answer;
        int N = nums.size(), carry = 0;
        for (int i = N - 1; i >= 0 || k > 0; i--)
        {
            int num = 0;
            if (i >= 0) num = nums[i];
            int sum = num + (k % 10) + carry;
            Answer.push_back(sum % 10);
            carry = sum / 10;
            k /= 10;
        }
        if (carry) Answer.push_back(carry);
        reverse(Answer.begin(), Answer.end());
        return Answer;
    }

public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        return add(num, k);
    }
};