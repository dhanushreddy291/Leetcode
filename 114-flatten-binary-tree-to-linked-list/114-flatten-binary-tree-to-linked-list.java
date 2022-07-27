/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private TreeNode[] FlattenBinaryTree(TreeNode Root) {
        if (Root == null) return new TreeNode[2];
        TreeNode[] L = FlattenBinaryTree(Root.left), R = FlattenBinaryTree(Root.right);
        Root.left = null;
        if (L[0] != null) {
            Root.left = null;
            Root.right = L[0];
            L[1].right = R[0];
            return new TreeNode[]{Root, R[0] == null ? L[1] : R[1]};
        } else {
            Root.right = R[0];
            return new TreeNode[]{Root, R[0] == null ? Root : R[1]};
        }
    }
    public void flatten(TreeNode root) {
        FlattenBinaryTree(root);
    }
}