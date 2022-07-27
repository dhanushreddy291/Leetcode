class Solution {
public:
    bool isMatch(string A, string B) {
        string tempA = "#" + A, tempB = "#" + B;
        vector <vector <bool>> Data (A.size() + 1, vector <bool> (B.size() + 1, false));
        Data[0][0] = true;

        for (int i = 0; i <= A.size(); i++)
        for (int j = 0; j <= B.size(); j++)

        if ((tempA[i] == tempB[j] || tempB[j] == '?') && (i*j != 0))
        Data[i][j] = Data[i - 1][j - 1];

        else if (tempB[j] == '*')
        {
            if (i)
            Data[i][j] = Data[i - 1][j];

            if (j)
            Data[i][j] = Data[i][j] || Data[i][j - 1];
        }

        return (Data[A.size()][B.size()])? 1 : 0;
    }
};