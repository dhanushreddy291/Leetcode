class Solution {
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        srand(time(0));
        string code = "";
        while (url2code.find(longUrl) == url2code.end()) {
            for (int i = 0; i < 6; i++) {
                code += alphabets[rand() % 62];
            }
            if (code2url.find(code) == code2url.end()) {
                code2url[code] = longUrl;
                url2code[longUrl] = code;
            }
        }
        return "http://bit.ly/" + code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int p = shortUrl.find_last_of("/");
        return code2url[shortUrl.substr(p + 1)];
    }
    
private:
    string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    unordered_map <string, string> url2code, code2url;
};