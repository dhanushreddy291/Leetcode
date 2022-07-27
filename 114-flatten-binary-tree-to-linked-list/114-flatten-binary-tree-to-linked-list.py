# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        
        def helper(root):
            if root is None:
                return [None, None]
            L = helper(root.left)
            R = helper(root.right)
            root.left = None
            if L[0] is None:
                return [root, R[1] if R[0] is not None else root]
            root.right = L[0]
            L[1].right = R[0]
            return [root, R[1] if R[0] is not None else L[1]]
        
        helper(root)
        