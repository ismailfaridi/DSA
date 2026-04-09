class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        left = zeros = max_len = 0

        # Right pointer expands the window
        for right in range(len(nums)):
            # If current element is zero, inc zero count
            if nums[right] == 0:
                zeros += 1

            # If zero count exceeds k, move left pointer to shrink the window and adjust zero count
            if zeros > k:
                if nums[left] == 0:
                    zeros -= 1

                left += 1

            cur_len = right - left + 1
            max_len = max(max_len, cur_len)  # Update max window size

        return max_len

# Sliding Window
# TC: O(N)
# SC: O(1)