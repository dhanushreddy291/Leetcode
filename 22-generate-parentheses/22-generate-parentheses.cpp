class Solution {
private:
    void Generator(int L, int R) {
        if (L == 0 && R == 0) Answer.push_back(Temp);
        else {
            if (L > 0) {
                Temp.push_back('(');
                Generator(L - 1, R);
                Temp.pop_back();
            }
            if (R - L > 0) {
                Temp.push_back(')');
                Generator(L, R - 1);
                Temp.pop_back();
            }
        }
    }
public:
    vector <string> Answer;
    string Temp;
    vector<string> generateParenthesis(int n) {
        Temp = "";
        Answer.clear();
        Generator(n, n);
        return Answer;
    }
};