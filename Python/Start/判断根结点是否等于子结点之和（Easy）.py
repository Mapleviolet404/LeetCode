class TreeNode:
    def __init__(self, val = 0, left = None, right = Node):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def check_tree(self, root: Optional[TreeNode]) -> bool:
        return True if root.val == root.left.val + root.right.val else False