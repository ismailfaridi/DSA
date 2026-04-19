class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        # Ensure nums1 is the smaller array to keep binary search efficient (swap references).
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        n1, n2 = len(nums1), len(nums2)
        low, high = 0, n1 # binary search range on nums1 (shorter array)

        while low <= high:
            # Partition/Cut indices for nums1 and nums2
            i = (low + high) // 2
            j = (n1 + n2 + 1) // 2 - i # +1 ensures left side gets the extra element when total is odd.

            # Left and right values around the partition
            left1  = nums1[i-1] if i > 0  else float('-inf')
            right1 = nums1[i]   if i < n1 else float('inf')
            left2  = nums2[j-1] if j > 0  else float('-inf')
            right2 = nums2[j]   if j < n2 else float('inf')

            # Valid parition conditions
            if (left1 <= right2) and (left2 <= right1):
                # If total length is odd median is max(left). If even median is average of middle two elements.
                if (n1 + n2) % 2 == 1:
                    return max(left1, left2)
                return (max(left1, left2) + min(right1, right2)) / 2
            
            elif left1 > right2:
                high = i - 1 # Too many elements taken from nums1, move left
            else:
                low = i + 1  # Too few elements taken from nums1, move right (left2 > right1)

# TC: O(log(min(m, n)))
# SC: O(1)