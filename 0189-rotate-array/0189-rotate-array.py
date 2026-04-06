class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n  # k can be greater than len(nums), so we % it to get the correct k value.

        def reverse(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1

        # right shift
        reverse(0, n - 1) # reverse the entire array
        reverse(0, k - 1) # reverse first k elements
        reverse(k, n - 1) # reverse last n-k elements

        # left shift
        # reverse(0, n - 1)
        # reverse(0, n - k - 1)
        # reverse(n - k, n - 1)