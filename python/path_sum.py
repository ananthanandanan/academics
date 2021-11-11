# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    
    def hasPathSum(self, root: TreeNode, targetSum: int) -> bool:
        ### check if the root node is none, no further progress is possible.
        if root == None:
            return False
        
        elif targetSum-root.val == 0 and root.left==None and root.right==None:
            return True
            
        else:
            return self.hasPathSum(root.left, targetSum-root.val) or self.hasPathSum(root.right, targetSum-root.val)