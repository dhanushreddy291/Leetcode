static string arr[] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
private:
void Permute (string &A, int i, vector <string> &Answer, string &str, map <int, vector <char>> &TelephoneButtons)
{
    int k = A[i] - '0';

    if (i == A.size())
    Answer.push_back (str);

    else if (k < 2)
    {
        str += A[i];
        Permute (A, i + 1, Answer, str, TelephoneButtons);
        str.erase(str.end() - 1,str.end());
    }

    else
    {
        for (int j = 0; j < TelephoneButtons[k].size(); j++)
        {
            str += TelephoneButtons[k][j];
            Permute (A, i + 1, Answer, str, TelephoneButtons);
            str.erase(str.end() - 1,str.end());
        }
    }

    return;

}
public:
    vector<string> letterCombinations(string A) {

    string str = "";
    vector <string> Answer;
    map <int, vector <char>> TelephoneButtons;

    vector <char> temp1 = {'a', 'b', 'c'};
    TelephoneButtons[2] = temp1;

    vector <char> temp2 = {'d', 'e', 'f'};
    TelephoneButtons[3]= temp2;

    vector <char> temp3 = {'g', 'h', 'i'};
    TelephoneButtons[4] = temp3;

    vector <char> temp4 = {'j', 'k', 'l'};
    TelephoneButtons[5] = temp4;
    
    vector <char> temp5 = {'m', 'n', 'o'};
    TelephoneButtons[6] = temp5;

    vector <char> temp6 = {'p', 'q', 'r', 's'};
    TelephoneButtons[7] = temp6;

    vector <char> temp7 = {'t', 'u', 'v'};
    TelephoneButtons[8] = temp7;

    vector <char> temp8 = {'w', 'x', 'y', 'z'};
    TelephoneButtons[9] = temp8;
    if (A.size() == 0) return Answer;
    Permute (A, 0, Answer, str, TelephoneButtons);
    return Answer;
}
};