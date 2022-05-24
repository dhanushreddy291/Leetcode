static string arr[] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
private:
    vector <string> helper(string s) {
        if(s.length()==0){
            vector<string> temp2;
            temp2.push_back("");
            return temp2;
        }
        char ch = s[0];
        string x = arr[ch-'0'-1];
        vector<string> temp1 = helper(s.substr(1));
        vector<string> ans;
        for(int j=0;j<x.length();j++){
            char c = x[j];
            for(int k=0;k<temp1.size();k++){
                ans.push_back(c+temp1[k]);
            }
        }
        return ans;
    }
public:
    vector<string> letterCombinations(string s) {
        if (s.length() == 0) return {};
        else return helper(s);
    }
};