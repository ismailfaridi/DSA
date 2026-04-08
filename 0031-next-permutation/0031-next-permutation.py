class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        pivot, n = -1, len(nums) # pivot stores the index where order breaks

        # Find the pivot index
        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                pivot = i
                break
        
        # Edge case: if no pivot, array is in descending order; reverse to smallest permutation
        if pivot == -1:
            nums.reverse()
            return
        
        # Find the smallest digit in the suffix greater than nums[pivot] and swap them
        for i in range(n - 1, pivot, -1):
            if nums[i] > nums[pivot]:
                nums[i], nums[pivot] = nums[pivot], nums[i]
                break
        
        # Reverse the suffix (right side of pivot) to get next smallest order
        nums[pivot + 1:] = reversed(nums[pivot + 1:])

# TC: O(N)
# SC: O(1)

# To find next permutation with minimal change, we need to find a digit that can be increased slightly to make the number bigger and then rearrange the remaining part to be the smallest possible.
# - Traverse from the end and find the first index where the current digit is smaller than the next one (this is the "breaking point").
# - Then again traverse from the end to find the first digit greater than the breaking point digit and swap them.
# - Finally, reverse the part of the array to the right of the breaking point to get the smallest next permutation.
# - If no such breaking point exists (entire array is descending), just reverse the whole array. (Edge Case)