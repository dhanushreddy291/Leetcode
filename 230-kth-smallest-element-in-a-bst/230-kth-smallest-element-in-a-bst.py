class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:

        def helper(root, k):
            if root is None:
                return 0
            L = helper(root.left, k)
            if self.KthNode == -1:
                if k - L == 1:
                    self.KthNode = root.val
                if self.KthNode != -1:
                    return 0
                R = helper(root.right, k - L - 1)
                return L + R + 1
            return 0


        self.KthNode = -1
        helper(root, k)
        return self.KthNode
