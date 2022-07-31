class MinStack {
    
private:
    stack <int> Stack;
    int Min;

public:
    MinStack() {
        while (!Stack.empty()) {
            Stack.pop();
        }
        Min = INT_MAX;
    }
    
    void push(int val) {
        if (Stack.empty() || val <= Min) {
            Stack.push(Min);
            Min = val;
            Stack.push(val);
        } else {
            Stack.push(val);
        }
    }
    
    void pop() {
        int Top = Stack.top();
        if (Top == Min) {
            Stack.pop();
            Min = Stack.top();
        }
        Stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return Min;
    }
};