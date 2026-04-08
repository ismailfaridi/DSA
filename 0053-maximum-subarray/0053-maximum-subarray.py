class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum, curSum = nums[0], 0

        for n in nums:
            if curSum < 0:
                curSum = 0

            curSum += n
            maxSum = max(curSum, maxSum)

        return maxSum

# This uses Kadaneâs Algorithm to find the maximum sum of a contiguous subarray in O(n) time. The idea is to keep a running sum, ignoring it whenever it becomes negative, since a negative sum reduces future totals. Positive numbers contribute to the sum, while large negative sums are discarded.
# TC: O(N)
# SC: O(1)