# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        output = []
        def DFS(root):
            if root == None:
                return []

            DFS(root.left)
            output.append(root.val)
            DFS(root.right)

        DFS(root)
        return output
