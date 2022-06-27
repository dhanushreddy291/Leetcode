class Solution
{
private:
    string add(string &a, string &b)
    {
        int n = a.size();
        string ans = "";
        int carry = 0, j = b.size() - 1;
        for (int i = n - 1; j >= 0; i--, j--)
        {
            int A = 0, B = (b[j] - '0');
            if (i >= 0)
            {
                A = (a[i] - '0');
            }
            int sum = A + B + carry;
            ans += (sum % 2 + '0');
            carry = sum / 2;
        }
        if (carry > 0)
            ans += (carry + '0');
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string stringAdder(string &a, string &b)
    {
        if (a.size() < b.size())
            return add(a, b);
        return add(b, a);
    }

public:
    string addBinary(string a, string b)
    {
        return stringAdder(a, b);
    }
};