class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0, N = traversal.size();
        stack <TreeNode*> Stack;
        TreeNode* root = NULL;
        while (i < N) {
            int dashCount = 0, val = 0;
            while (traversal[i] == '-') {
                dashCount++;
                i++;
            }
            while (i < N && traversal[i] != '-') {
                val = 10 * val + (traversal[i] - '0');
                i++;
            }
            if (Stack.empty()) {
                root = new TreeNode(val);
                Stack.push(root);
            } else if (Stack.size() == dashCount) {
                Stack.top() -> left = new TreeNode(val);
                Stack.push(Stack.top() -> left);
            } else {
                while (Stack.size() > dashCount) Stack.pop();
                Stack.top() -> right = new TreeNode(val);
                Stack.push(Stack.top() -> right);
            }
        }
        return root;
    }
};