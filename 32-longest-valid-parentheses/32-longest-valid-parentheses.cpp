class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> Stack;
        Stack.push(-1);
        int N = s.size(), maxLength = 0;
        for (int i = 0; i < N; i++) {
            if (s[i] == '(') Stack.push(i);
            else {
                Stack.pop();
                if (Stack.empty()) {
                    Stack.push(i);
                } else {
                    maxLength = max(maxLength, i - Stack.top());
                }
            }
        }
        return maxLength;
    }
};