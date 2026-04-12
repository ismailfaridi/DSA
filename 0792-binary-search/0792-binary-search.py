class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1

        while left <= right:
            mid = (left + right) // 2

            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        
        return -1

# Binary search is an efficient "divide and conquer" algorithm used to find the position (index) of a target element within a sorted array. Unlike a linear search that checks every element sequentially, binary search repeatedly halves the search space, making it significantly faster for large datasets.
# TC: O(log n) â each step halves the search space
# SC: O(1)