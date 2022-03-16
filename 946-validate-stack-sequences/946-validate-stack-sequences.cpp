class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> Stack;
        int j = 0, length = pushed.size();
        for (int i = 0; i < length; i++) {
            while (!Stack.empty() && Stack.top() == popped[j]) {
                j++;
                Stack.pop();    
            }
            Stack.push(pushed[i]);
        }
        while (!Stack.empty() && Stack.top() == popped[j]) {
                j++;
                Stack.pop();    
        }
        return Stack.empty();
    }
};