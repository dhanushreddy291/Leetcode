class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector <int> Map(26, 0);
        for (int i = 0; i < 26; i++) {
            Map[(order[i] - 'a')] = i;
        }
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                words[i][j] = 'a' + Map[(words[i][j] - 'a')];
            }
        }
        for (int i = 0; i < words.size() - 1; i++) {
            if (words[i].compare(words[i + 1]) > 0) {
                return false;
            }
        }
        return true;
    }
};