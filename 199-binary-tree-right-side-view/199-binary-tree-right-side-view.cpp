class Solution {
private:
    int Height(TreeNode* root) {
        if (root == NULL) return 0; 
        return 1 + max(Height(root -> left), Height(root -> right));
    }
    void inorder(TreeNode* root, int height, vector <int> &Map) {
        if (root) {
            inorder(root -> left, height + 1, Map);
            Map[height] = root -> val;
            inorder(root -> right, height + 1, Map);
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector <int> rightView(Height(root), 0);
        inorder(root, 0, rightView);
        return rightView;
    }
};