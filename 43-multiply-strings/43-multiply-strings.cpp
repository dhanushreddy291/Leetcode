class Solution
{
private:
    string multiply(string &a, int n)
    {
        int N = a.size(), carry = 0;
        string ans = "";
        for (int i = N - 1; i >= 0; i--)
        {
            int A = (a[i] - '0');
            int product = A * n + carry;
            ans += (product % 10 + '0');
            carry = product / 10;
        }
        if (carry)
            ans += (carry + '0');
        reverse(ans.begin(), ans.end());
        return ans;
    }

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
            ans += (sum % 10 + '0');
            carry = sum / 10;
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

    string multiplier(string &b, string &a)
    {
        string product = "";
        int M = b.size() - 1;
        for (int i = M; i >= 0; i--)
        {
            int B = (b[i] - '0');
            string currProduct = multiply(a, B);
            int numZeroes = M - i;
            for (int j = 0; j < numZeroes; j++)
            {
                currProduct += '0';
            }
            product = stringAdder(product, currProduct);
        }
        return product;
    }

    string stringMultiplier(string &a, string &b)
    {
        if ((a.size() == 1 && a[0] == '0') || (b.size() == 1 && b[0] == '0'))
        {
            return "0";
        }
        if (b.size() < a.size())
            return multiplier(b, a);
        return multiplier(a, b);
    }

public:
    string multiply(string num1, string num2)
    {
        return stringMultiplier(num1, num2);
    }
};