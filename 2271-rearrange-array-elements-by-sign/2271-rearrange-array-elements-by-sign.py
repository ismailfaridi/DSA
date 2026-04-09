class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        i, j = 0, 1
        arr = [0] * len(nums)

        for num in nums:
            if num > 0:
                arr[i] = num
                i += 2
            else:
                arr[j] = num
                j += 2

        return arr

# Even indices (positive numbers), Odd indices (negative numbers)
# TC: O(N)
# SC: O(N)