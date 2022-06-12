class Solution {
private:
    void Generator(int L, int R, vector <string> &Answer, string &Temp) {
        if (L == 0 && R == 0) Answer.push_back(Temp);
        else {
            if (L > 0) {
                Temp.push_back('(');
                Generator(L - 1, R, Answer, Temp);
                Temp.pop_back();
            }
            if (R - L > 0) {
                Temp.push_back(')');
                Generator(L, R - 1, Answer, Temp);
                Temp.pop_back();
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector <string> Answer;
        string str = "";
        Generator(n, n, Answer, str);
        return Answer;
    }
};