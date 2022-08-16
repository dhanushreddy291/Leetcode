class Solution:
    @lru_cache(maxsize=None)
    def rob(self, root: Optional[TreeNode]) -> int:
        return 0 if not root else max(root.val + (self.rob(root.left.left) + self.rob(root.left.right) if root.left else 0) + (self.rob(root.right.left) + self.rob(root.right.right) if root.right else 0), self.rob(root.left) + self.rob(root.right))
