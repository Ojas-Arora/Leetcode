class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def helper(start, end):
            if start > end:
                return None
            mid = (start + end) // 2
            root = TreeNode(nums[mid])
            root.left = helper(start, mid - 1)
            root.right = helper(mid + 1, end)
            return root

        return helper(0, len(nums) - 1)
