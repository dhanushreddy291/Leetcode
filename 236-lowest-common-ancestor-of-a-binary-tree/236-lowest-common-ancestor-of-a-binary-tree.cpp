/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* FindLCA (TreeNode* A, TreeNode* B, TreeNode* C)
    {
        if (A == NULL)
        return NULL;

        if (A == B || A == C)
        return A;

        TreeNode *LeftLCA = FindLCA (A -> left, B, C), *RightRCA = FindLCA (A -> right, B, C);

        if (LeftLCA && RightRCA)
        return A;

        else if (LeftLCA)
        return LeftLCA;

        else 
        return RightRCA;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return FindLCA (root, p, q);
    }
};