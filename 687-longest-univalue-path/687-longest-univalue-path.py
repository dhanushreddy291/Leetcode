# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def longestUnivaluePath(self, root: Optional[TreeNode]) -> int:
        self.maxUnivaluePath = 0
        self.helper(root)
        return self.maxUnivaluePath
        
    def helper(self, root: Optional[TreeNode]) -> int:
        if root:
            LeftPath = self.helper(root.left)
            RightPath = self.helper(root.right)
            L, R = 0, 0
            if root.left and root.left.val == root.val:
                L = 1 + LeftPath
            if root.right and root.right.val == root.val:
                R = 1 + RightPath
            self.maxUnivaluePath = max(self.maxUnivaluePath, L + R)
            return max(L, R)
        return 0