class Logger {
private:
    unordered_map <string, int> Hash;
public:
    bool shouldPrintMessage(int timestamp, string message) {
        if (Hash.find(message) != Hash.end() && Hash[message] > timestamp) return false;
        Hash[message] = 10 + timestamp;
        return true;
    }
};