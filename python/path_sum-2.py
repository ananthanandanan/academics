# Definition for a binary tree node.
from typing import List


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def pathSum(self, root:TreeNode, targetSum: int,path=[]) -> List[List[int]]:
        ### check if the root node is none, no further progress is possible.
        if root == None:
            return []
        
        elif targetSum-root.val == 0 and root.left==None and root.right==None:
            
            return [path+[root.val]] ### [[path...2,3] + [4]] -> [[2,3, 4], ...]
            
        else:
            return self.pathSum(root.left,targetSum-root.val,path+[root.val]) + self.pathSum(root.right,targetSum-root.val,path+[root.val])