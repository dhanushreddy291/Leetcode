class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector <vector <int>> Answer;
        queue <Node*> Queue;
        if (root) Queue.push(root);
        while (!Queue.empty()) {
            int size = Queue.size();
            vector <int> level;
            while (size--) {
                root = Queue.front();
                Queue.pop();
                level.push_back(root -> val);
                for (Node* child: root->children) {
                    Queue.push(child);
                }
            }
            Answer.push_back(level);
        }
        return Answer;
    }
};