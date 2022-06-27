// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    private:
    string adder(string &a, string &b)
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
        if (carry > 0) ans += (carry + '0');
        reverse(ans.begin(), ans.end());
        return ans;
    }
	public:
   	string add(string s1, string s2){
   	    if (s1.size() < s2.size()) return adder(s1, s2);
   	    else return adder(s2, s1);
   	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends