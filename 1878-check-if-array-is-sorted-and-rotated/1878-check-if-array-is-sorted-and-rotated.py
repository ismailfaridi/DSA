class Solution:
    def check(self, nums: List[int]) -> bool:
        count = 0   # counts how many times the sorted order breaks.
        n = len(nums)

        for i in range(n):
            if nums[i] > nums[(i + 1) % n]: # % n wraps index so last element compares with first (circular check).
                count += 1
        
        return count <= 1

# A sorted and rotated array has at most one place where the order breaks (i.e., where a number is greater than the next number). If this break happens more than once, the array is not sorted and rotated.