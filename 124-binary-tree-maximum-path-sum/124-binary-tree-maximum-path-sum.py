# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.PathSum = -10**7
        self.helper(root)
        return self.PathSum

    def helper(self, root):
        if root:
            leftSum = self.helper(root.left)
            rightSum = self.helper(root.right)
            self.PathSum = max(self.PathSum, root.val + max(leftSum, 0) + max(rightSum, 0))
            return max(root.val + max(leftSum, 0), root.val + max(rightSum, 0))
        return 0