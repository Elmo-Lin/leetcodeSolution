# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        res=[]
        self.inorder(root, res)
        i=0
        j=len(res)-1
        while i<j:
            if res[i]+res[j]==k:
                return True
            elif res[i]+res[j]<k:
                i+=1
            else:
                j-=1
    
        return False;

    
    def inorder(self, root, res):
        if root==None:
            return

        self.inorder(root.left, res)
        res.append(root.val)
        self.inorder(root.right, res)