class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        self.Answer = -1
        self.RootVal = root.val
        self.helper(root)
        return self.Answer
    
    def helper(self, root):
        if root:
            if root.val != self.RootVal:
                if self.Answer == -1:
                    self.Answer = root.val
                elif self.Answer >= root.val:
                    self.Answer = root.val
                else:
                    return
            self.helper(root.left)
            self.helper(root.right)
