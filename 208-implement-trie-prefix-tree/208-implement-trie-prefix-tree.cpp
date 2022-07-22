class Trie {
    Trie* Head;
    bool wordEnd;
    Trie* Words[26];
public:
    Trie() {
        Head = NULL;
        wordEnd = false;
        for (int i = 0; i < 26; i++) {
            Words[i] = NULL;
        }
    }
    
    void insert(string word) {
        if (Head == NULL) {
            Head = new Trie();
        }
        Trie* Root = Head;
        int N = word.size();
        for (int i = 0; i < N; i++) {
            if (Root -> Words[word[i] - 'a'] == NULL) {
                Root -> Words[word[i] - 'a'] = new Trie();
            }
            Root = Root -> Words[word[i] - 'a'];
        }
        Root -> wordEnd = true;
    }
    
    bool search(string word) {
        if (Head == NULL) return false;
        Trie* Root = Head;
        int N = word.size();
        for (int i = 0; i < N; i++) {
            if (Root -> Words[word[i] - 'a'] == NULL) {
                return false;
            }
            Root = Root -> Words[word[i] - 'a'];
        }
        return Root -> wordEnd;
    }
    
    bool startsWith(string prefix) {
        if (Head == NULL) return false;
        Trie* Root = Head;
        int N = prefix.size();
        for (int i = 0; i < N; i++) {
            if (Root -> Words[prefix[i] - 'a'] == NULL) {
                return false;
            }
            Root = Root -> Words[prefix[i] - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */