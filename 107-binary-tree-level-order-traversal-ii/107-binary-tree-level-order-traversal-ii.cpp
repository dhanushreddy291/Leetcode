class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector <int>> Answer;
        vector <int> temp;
        queue <TreeNode*> Queue;
        if (root) {
            Queue.push (root);
            while (!Queue.empty()) {
                int size = Queue.size();
                vector <int> temp;
                while (size--) {
                    TreeNode* k = Queue.front();
                    Queue.pop();
                    if (k -> left) Queue.push(k -> left);
                    if (k -> right) Queue.push(k -> right);
                    temp.push_back(k -> val);
                }
                Answer.push_back(temp);
            }            
        }
        reverse(Answer.begin(), Answer.end());
        return Answer;
    }
};